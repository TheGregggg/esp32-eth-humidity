{pkgs ? import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/812b3986fd1568f7a858f97fcf425ad996ba7d25.tar.gz") {}}:
pkgs.mkShellNoCC {
  packages = with pkgs; [
    esptool
    tio
  ];
}
