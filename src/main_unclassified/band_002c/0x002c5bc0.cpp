/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C796BC270E7FA76E0A4BCB9C1EAF5EE1E230A4C645659811BA32BD50DBB9F47
 * Entry: 0x002c5bc0, Ghidra index: 10069, label: FUN_002c5bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c5bc0(float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EDX;
  undefined1 local_6c [12];
  undefined4 local_60;
  undefined4 local_50 [19];
  float local_4;
  
  local_60 = 0;
  puVar1 = local_50;
  iVar2 = 2;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_002c5660(local_6c,*(undefined4 *)(in_EDX + 0x2c),*(undefined4 *)(in_EDX + 0x30));
  FUN_002c5970();
  if (local_4 * 0.1 < param_1) {
    param_1 = local_4 * 0.1;
  }
  if (1e-10 <= local_4) {
    FUN_002c5a40(local_6c,param_1 / local_4);
    return (float10)param_1;
  }
  return (float10)0.0;
}
