import sys
from PyQt5.QtWidgets import QApplication
import BackendV2

def main():
    app = QApplication(sys.argv)
    w = BackendV2.App()
    w.show()
    sys.exit(app.exec_())

if __name__ == '__main__':
    main()