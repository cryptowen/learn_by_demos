#!/usr/bin/env python

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


great_class_module = Extension('_great_class',
                               sources=['great_class_wrap.cxx'],
                               )

setup(name='great_class',
      version='0.1',
      author="SWIG Docs",
      description="""Simple swig great_class from docs""",
      ext_modules=[great_class_module],
      py_modules=["great_class"],
      )
