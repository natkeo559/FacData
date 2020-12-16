import sys
from PyQt5.QtWidgets import QApplication
import Backend

def main():
    app = QApplication(sys.argv)
    form = Backend.App()
    form.show()
    app.exec_()

if __name__ == '__main__':
    main()