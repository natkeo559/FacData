import sys
from PyQt5 import QtCore, QtGui, QtWidgets
import matplotlib.pyplot as plt
from matplotlib.legend_handler import HandlerLine2D
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg
from matplotlib.figure import Figure
import numpy as np
import json
import UI_FacDataV2

class App(QtWidgets.QMainWindow, UI_FacDataV2.Ui_MainWindow):
    def __init__(self, parent=None):
        super(App, self).__init__(parent=parent)
        self.setupUi(self)
        self.pushButton_Clear.clicked.connect(self.clear)
        self.actionImport.triggered.connect(self.ImportFileDialog)
        self.actionExport.triggered.connect(self.ExportFileDialog)
        self.pushButton_Default.clicked.connect(self.default)
        self.pushButton_Refresh.clicked.connect(self.refresh)
        self.refresh_shortcut = QtWidgets.QShortcut(QtGui.QKeySequence('Return'),self)
        self.refresh_shortcut.activated.connect(self.refresh)
        self.refresh()

    def clear(self):

        self.lineEdit_1.setText("0")
        self.lineEdit_2.setText("0")
        self.lineEdit_3.setText("0")
        self.lineEdit_4.setText("0")
        self.lineEdit_5.setText("0")
        self.lineEdit_6.setText("0")
        self.lineEdit_7.setText("0")
        self.lineEdit_8.setText("0")
        self.lineEdit_9.setText("0")

        self.lineEdit_10.setText("0")
        self.lineEdit_11.setText("0")
        self.lineEdit_12.setText("0")
        self.lineEdit_13.setText("1")

        self.refresh()

    def default(self):
        self.lineEdit_1.setText("0.8703565062")
        self.lineEdit_2.setText("0")
        self.lineEdit_3.setText("0")
        self.lineEdit_4.setText("0.08146167558")
        self.lineEdit_5.setText("0.8849294791")
        self.lineEdit_6.setText("0")
        self.lineEdit_7.setText("0")
        self.lineEdit_8.setText("0.06255830191")
        self.lineEdit_9.setText("0.9053781513")

        self.lineEdit_10.setText("12")
        self.lineEdit_11.setText("35")
        self.lineEdit_12.setText("14")
        self.lineEdit_13.setText("15")

        self.refresh()

    def refresh(self, data=None):
        if data:
            self.r1c1 = float(data["r1c1"])
            self.r1c2 = float(data["r1c2"])
            self.r1c3 = float(data["r1c3"])
            self.r2c1 = float(data["r2c1"])
            self.r2c2 = float(data["r2c2"])
            self.r2c3 = float(data["r2c3"])
            self.r3c1 = float(data["r3c1"])
            self.r3c2 = float(data["r3c2"])
            self.r3c3 = float(data["r3c3"])
            self.init_asst = int(data["Initial Asst"])
            self.init_assoc = int(data["Initial Assoc"])
            self.init_full = int(data["Initial Full"])
            self.years = int(data["Years"])
        else:
            self.get_vals()
        self.update_table()
        self.model()
        self.grapher()

    def get_vals(self):
        self.r1c1 = float(self.lineEdit_1.text()) if self.lineEdit_1.text() != '' else 0.0
        self.r1c2 = float(self.lineEdit_2.text()) if self.lineEdit_2.text() != '' else 0.0
        self.r1c3 = float(self.lineEdit_3.text()) if self.lineEdit_3.text() != '' else 0.0
        self.r2c1 = float(self.lineEdit_4.text()) if self.lineEdit_4.text() != '' else 0.0
        self.r2c2 = float(self.lineEdit_5.text()) if self.lineEdit_5.text() != '' else 0.0
        self.r2c3 = float(self.lineEdit_6.text()) if self.lineEdit_6.text() != '' else 0.0
        self.r3c1 = float(self.lineEdit_7.text()) if self.lineEdit_7.text() != '' else 0.0
        self.r3c2 = float(self.lineEdit_8.text()) if self.lineEdit_8.text() != '' else 0.0
        self.r3c3 = float(self.lineEdit_9.text()) if self.lineEdit_9.text() != '' else 0.0

        self.init_asst = int(self.lineEdit_10.text()) if self.lineEdit_10.text() != '' else 0.0
        self.init_assoc = int(self.lineEdit_11.text()) if self.lineEdit_11.text() != '' else 0.0
        self.init_full = int(self.lineEdit_12.text()) if self.lineEdit_12.text() != '' else 0.0

        self.years = int(self.lineEdit_13.text()) if self.lineEdit_13.text() != '' else 0.0
    
    def update_table(self):
        self.lineEdit_1.setText(str(self.r1c1))
        self.lineEdit_2.setText(str(self.r1c2))
        self.lineEdit_3.setText(str(self.r1c3))
        self.lineEdit_4.setText(str(self.r2c1))
        self.lineEdit_5.setText(str(self.r2c2))
        self.lineEdit_6.setText(str(self.r2c3))
        self.lineEdit_7.setText(str(self.r3c1))
        self.lineEdit_8.setText(str(self.r3c2))
        self.lineEdit_9.setText(str(self.r3c3))

        self.lineEdit_10.setText(str(self.init_asst))
        self.lineEdit_11.setText(str(self.init_assoc))
        self.lineEdit_12.setText(str(self.init_full))
        self.lineEdit_13.setText(str(self.years))

    def model(self):
        self.xvals = list(x for x in range(0, self.years + 1))

        self.total = []

        self.yval2_1 = []
        self.yval2_2 = []
        self.yval2_3 = []
        
        self.yval3_1 = []
        self.yval3_2 = []
        self.yval3_3 = []

        a = np.matrix([[self.r1c1, self.r1c2, self.r1c3],
                      [self.r2c1, self.r2c2, self.r2c3],
                      [self.r3c1, self.r3c2, self.r3c3]])
        b = np.matrix([[self.init_asst],
                      [self.init_assoc],
                      [self.init_full]])

        for t in range(0, self.years + 1):
            c = (a ** (t)) * b
            self.total.append((c[0, 0]) + (c[1, 0]) + (c[2, 0]))

            self.yval2_1.append(c[0, 0])
            self.yval2_2.append(c[1, 0])
            self.yval2_3.append(c[2, 0])

            if self.total[t] == 0.0:
                self.yval3_1.append(0)
                self.yval3_2.append(0)
                self.yval3_3.append(0)
            else:
                self.yval3_1.append((100 * (c[0, 0] / self.total[t])))
                self.yval3_2.append((100 * (c[1, 0] / self.total[t])))
                self.yval3_3.append((100 * (c[2, 0] / self.total[t])))

        e = np.linalg.eig(a)
        print(e)
        print(e[0])
        print(np.argmax(e[0],axis=0))
        ce = e[1][np.argmax(np.absolute(e[0]),axis=0)]
        print(ce*b)

    def grapher(self):
        f1 = Figure(figsize=(7.5,7), dpi=60)
        a1 = f1.add_subplot(111)
        pop, = a1.plot(self.xvals, self.total, label='Count', marker='.')
        a1.set_title('Total Count')
        a1.set_xlabel('Years')
        a1.set_ylabel('Count')
        a1.legend(handler_map={pop: HandlerLine2D(numpoints=1)})

        f2 = Figure(figsize=(7.5, 7), dpi=60)
        a2 = f2.add_subplot(111)
        phase, = a2.plot(self.xvals, self.yval2_1, label='Asst', marker='.')
        a2.plot(self.xvals, self.yval2_2, label='Assoc', marker='.')
        a2.plot(self.xvals, self.yval2_3, label='Full', marker='.')
        a2.set_title('Phases')
        a2.set_xlabel('Years')
        a2.set_ylabel('Count')
        a2.legend(handler_map={phase: HandlerLine2D(numpoints=1)})

        f3 = Figure(figsize=(7.5, 7), dpi=60)
        a3 = f3.add_subplot(111)
        perc, = a3.plot(self.xvals, self.yval3_1, label='Asst', marker='.')
        a3.plot(self.xvals, self.yval3_2, label='Assoc', marker='.')
        a3.plot(self.xvals, self.yval3_3, label='Full', marker='.')
        a3.set_title('Average')
        a3.set_xlabel('Years')
        a3.set_ylabel('Percentage')
        a3.legend(handler_map={perc: HandlerLine2D(numpoints=1)})

        canvas1 = FigureCanvasQTAgg(f1)
        canvas1.setParent(self.GraphFrame1)
        canvas1.show()

        canvas2 = FigureCanvasQTAgg(f2)
        canvas2.setParent(self.GraphFrame2)
        canvas2.show()

        canvas3 = FigureCanvasQTAgg(f3)
        canvas3.setParent(self.GraphFrame3)
        canvas3.show()

    def ExportFileDialog(self):
        self.refresh()

        facdata = {"r1c1": self.r1c1, "r1c2": self.r1c2, "r1c3": self.r1c3,
                   "r2c1": self.r2c1, "r2c2": self.r2c2, "r2c3": self.r2c3,
                   "r3c1": self.r3c1, "r3c2": self.r3c2, "r3c3": self.r3c3,
                   "Years": self.years, "Initial Asst": self.init_asst, "Initial Assoc": self.init_assoc,
                   "Initial Full": self.init_full}

        options = QtWidgets.QFileDialog.Options()
        options |= QtWidgets.QFileDialog.DontUseNativeDialog
        fileName, _ = QtWidgets.QFileDialog.getSaveFileName(self,"Export Model",".mod","Model Files (*.mod)", options=options)
        with open(fileName, "w") as outfile:
            json.dump(facdata,outfile, ensure_ascii=False, indent=4)
            


    def ImportFileDialog(self):
        options = QtWidgets.QFileDialog.Options()
        options |= QtWidgets.QFileDialog.DontUseNativeDialog
        fileName, _ = QtWidgets.QFileDialog.getOpenFileName(self,"QFileDialog.getOpenFileName()", "","Model Files (*.mod)", options=options)

        with open(fileName,"r") as infile:
            data = json.load(infile)
        self.refresh(data)
        
        