# coverity-test

"Your build will be rejected if at least 85% units of code are not compiled."

Steps:
- `make clean`
- `/<path>/cov-analysis-linux64-2019.03/bin/cov-build --dir cov-int make`
- `tar czvf myproject.tgz cov-int`
- Submit tgz file.
