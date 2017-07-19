# DiXCOVERy kernel
This is a customized version of the Samsung xCover 3 Lollipop 5.1.1 kernel, aiming to allow switching between selinux modes. In the future it will be introducing custom governors that aren't part of the stock kernel.

# Compiling the kernel
Step one:
* Change the CROSS_COMPILE variable in Makefile to the directory where your toolchain is.

Step two (use either one of these 2 options):
* Vanilla (unchanged) kernel:
  $ make pxa1908_xcover3lte_eur_defconfig
* DiXCOVERy (modified) kernel:
  $ make dixcovery_defconfig

Step three:
  $ make -jN
* Where N is the number of CPU threads you want to use for compiling.
