#pragma once
#define PY_SSIZE_T_CLEAN
#include "C:\Users\kiril\AppData\Local\Programs\Python\Python310\include\Python.h"

inline void qr()
{
    Py_Initialize();

    // ��������� ������� ������� ����������
    PyRun_SimpleString("import sys\n"
        "sys.path.append('.')");

    PyObject* pModule = PyImport_ImportModule("PtoCExtender");
    if (pModule != NULL) {
        // �������� ������ �� ������-������� qr_decomposition
        PyObject* pFunction = PyObject_GetAttrString(pModule, "Qr");
        if (pFunction != NULL && PyCallable_Check(pFunction)) {
            // �������� ������� � �������� �� ���������
            PyObject* pArgs = PyTuple_Pack(0);
            PyObject* pValue = PyObject_CallObject(pFunction, pArgs);
            Py_XDECREF(pArgs);

            // ������������ ���������, ���� ��� ����������
            if (pValue != NULL) {
                // ������������ ��������� pValue
                Py_XDECREF(pValue);
            }
            else {
                PyErr_Print(); // ��������� ������
            }

            Py_XDECREF(pFunction);
        }
        else {
            PyErr_Print(); // ��������� ������
        }
        Py_XDECREF(pModule);
    }
    else {
        PyErr_Print(); // ��������� ������
    }

    Py_Finalize();
}

inline void half_divide()
{
    Py_Initialize();

    // ��������� ������� ������� ����������
    PyRun_SimpleString("import sys\n"
        "sys.path.append('.')");

    PyObject* pModule = PyImport_ImportModule("NonLinear");
    if (pModule != NULL) {
        PyObject* pFunction = PyObject_GetAttrString(pModule, "half_divide");
        if (pFunction != NULL && PyCallable_Check(pFunction)) {
            // �������� ������� � �������� �� ���������
            // Instead of PyTuple_Pack, manually create a tuple with Unicode strings
            PyObject* pArgs = PyTuple_Pack(0);
            PyObject* pValue = PyObject_CallObject(pFunction, pArgs);
            Py_XDECREF(pArgs);

            // ������������ ���������, ���� ��� ����������
            if (pValue != NULL) {
                // ������������ ��������� pValue
                Py_XDECREF(pValue);
            }
            else {
                PyErr_Print(); // ��������� ������
            }

            Py_XDECREF(pFunction);
        }
        else {
            PyErr_Print(); // ��������� ������
        }
        Py_XDECREF(pModule);
    }
    else {
        PyErr_Print(); // ��������� ������
    }

    Py_Finalize();
}

inline void combin_method()
{
    Py_Initialize();

    // ��������� ������� ������� ����������
    PyRun_SimpleString("import sys\n"
        "sys.path.append('.')");

    PyObject* pModule = PyImport_ImportModule("NonLinear");
    if (pModule != NULL) 
    {
        PyObject* pFunction = PyObject_GetAttrString(pModule, "combin_method");
        if (pFunction != NULL && PyCallable_Check(pFunction)) 
        {
            // �������� ������� � �������� �� ���������
            // Instead of PyTuple_Pack, manually create a tuple with Unicode strings
            PyObject* pArgs = PyTuple_Pack(0);
            PyObject* pValue = PyObject_CallObject(pFunction, pArgs);
            Py_XDECREF(pArgs);

            // ������������ ���������, ���� ��� ����������
            if (pValue != NULL) {
                // ������������ ��������� pValue
                Py_XDECREF(pValue);
            }
            else {
                PyErr_Print(); // ��������� ������
            }

            Py_XDECREF(pFunction);
        }
        else 
        {
            PyErr_Print(); // ��������� ������
        }
        Py_XDECREF(pModule);
    }
    else
    {
        PyErr_Print(); // ��������� ������
    }

    Py_Finalize();
}