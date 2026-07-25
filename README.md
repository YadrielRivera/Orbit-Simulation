## Building the project

```bash
mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=RELEASE -G "Unix Makefiles" ..
make VERBOSE=1
```

## Running the project
Inside the `build` directory, the executable file ORBIT.exe should be available
