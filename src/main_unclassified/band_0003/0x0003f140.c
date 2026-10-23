/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 38C973E1C1D386EAEB41427FE8444C031A63040C9C1964B934730EFCDFC94EC1
 * Entry: 0x0003f140, Ghidra index: 471, label: FUN_0003f140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003f140(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)FUN_000120f0();
  if ((*(int *)(in_ECX + 0x880) < 0) || (8 < *(int *)(in_ECX + 0x880))) {
    return 0;
  }
  if (*(char *)(in_ECX + 0x874) == '\0') {
    cVar1 = FUN_00047860((undefined4 *)(in_ECX + 0x870));
    if (cVar1 == '\0') {
      (**(code **)(*piVar2 + 0x15c))
                (*(undefined4 *)(in_ECX + 0x878),*(undefined4 *)(in_ECX + 0x870));
    }
    else {
      *(undefined1 *)(in_ECX + 0x874) = 1;
    }
    if (*(char *)(in_ECX + 0x874) == '\0') {
      return 1;
    }
  }
  cVar1 = FUN_00047860(in_ECX + 0x870);
  if (cVar1 != '\0') {
    return 1;
  }
  return 2;
}
