#!/usr/bin/env bash

ROOT=`pwd`
cmake -S cpp -B build
cd $ROOT/build && make
cp lib/patient* $ROOT/python
cd $ROOT/python
pipenv install
pipenv run python main.py
