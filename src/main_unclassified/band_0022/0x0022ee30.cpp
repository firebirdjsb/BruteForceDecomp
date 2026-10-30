/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD05ED5F1E507EFE0F403A057C6C4BB5B1F6ADC825C582667B34D06CEA91153A
 * Entry: 0x0022ee30, Ghidra index: 7729, label: FUN_0022ee30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0022ee30(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  if ((**(int **)(in_ECX + 0x228) == 7) && (*(int *)(in_ECX + 0x1b0) == 0)) {
    return 0;
  }
  cVar1 = FUN_0014a2f0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_00232660();
  FUN_0022ec30();
  FUN_0022e780(in_ECX);
  FUN_0022ec90(param_1);
  FUN_0022e4c0(in_ECX);
  FUN_0022ece0();
  FUN_0022ebc0(param_1);
  FUN_0022eee0(param_1);
  if ((*(byte *)(in_ECX + 0x224) & 2) == 0) {
    *(byte *)(in_ECX + 0x224) = *(byte *)(in_ECX + 0x224) & 0xfb;
  }
  FUN_0022efe0();
  FUN_00222b30(in_ECX + 0x1d0,param_1);
  *(byte *)(in_ECX + 0x225) = *(byte *)(in_ECX + 0x225) & 0xfd;
  return 1;
}
