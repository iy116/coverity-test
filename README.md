# coverity-test

"Your build will be rejected if at least 85% units of code are not compiled."

For C:
- `make clean`
- `cov-build --dir cov-int make`
- `tar czvf myproject.tgz cov-int`
- Submit tgz file.


For JS:
- `cov-build --dir cov-int --no-command --fs-capture-search ./`
- tar czvf myproject.tgz cov-int`
- Submit tgz file.

