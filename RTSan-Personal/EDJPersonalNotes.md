# Personal RTSan Notes

## Look Up Later

 * https://llvm.org/docs/CodingStandards.html Mentions in File headers section that Emacs formatting

## Steps for getting started

PR

* Read the two LLVM Guides
* Style
  * Spaces better than tabs
  * Don't do almost auto stance, use reasoning
  * Special llvm::Sort_wrapper function
  * #include as little as possible

Questions for Chris and David

* Version of CMake (Does it matter? This site says it does https://llvm.org/docs/CMake.html)
  * Yes, cmaking llvm broke if not on 3.20 or higher
  