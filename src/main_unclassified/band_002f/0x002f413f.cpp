/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B9E786E542B6890E1D21A8E1A145FA26BF2876C71D23640720F0CE22ADE1E12
 * Entry: 0x002f413f, Ghidra index: 10851, label: XFindClose
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XFindClose(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0x434f4e54) {
    if (iVar2 == 0x4e49434b) {
      LocalFree(param_1);
      return 1;
    }
    if (iVar2 != 0x53425645) {
      if (iVar2 != -0x41b41600) {
        return 0;
      }
      iVar2 = param_1[3];
      goto LAB_002f417b;
    }
  }
  iVar2 = param_1[1];
LAB_002f417b:
  LocalFree(param_1);
  uVar1 = CloseHandle(iVar2);
  return uVar1;
}
