# googletest_small_example

## Build
```
mkdir build
cd build
cmake ..
make
```

## Run
```
./bin/application_test
```

## Problem
pointer being freed was not allocated. Guess Reason: in test/test_ut/application_test_ut.cpp, the mock_driver_ is freed twice? 

In general, if class A contains a member that is a pointer to class B, how to instantiate class A in Gtest frame in order to avoid this issue?
