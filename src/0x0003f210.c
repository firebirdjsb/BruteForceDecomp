/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D199BD23B7C5670281F0B79BD6D673FEA34A92AB85BA2868254EDF827363B196
 * Entry: 0x0003f210, Ghidra index: 473, label: FUN_0003f210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003f210(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)FUN_000120f0();
  if ((-1 < *(int *)(in_ECX + 0x880)) && (*(int *)(in_ECX + 0x880) < 9)) {
    cVar1 = FUN_00047860((undefined4 *)(in_ECX + 0x870));
    if (cVar1 == '\0') {
      *(undefined1 *)(in_ECX + 0x874) = 1;
      (**(code **)(*piVar2 + 0x15c))
                (*(undefined4 *)(in_ECX + 0x878),*(undefined4 *)(in_ECX + 0x870));
    }
    return 1;
  }
  return 0;
}
