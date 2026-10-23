/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5874A7E7343AFD0CF574737EBD77ED057B55C6E3854F634B06ED19D5BDB41421
 * Entry: 0x00384177, Ghidra index: 13642, label: FUN_00384177
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384177(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar2 = (byte *)FUN_00380fc4();
  *pbVar2 = *pbVar2 | 2;
  bVar3 = 1;
  bVar1 = 1;
  do {
    if ((pbVar2[5] & bVar3) != 0) {
      FUN_003824fa(bVar1);
      pbVar2[5] = pbVar2[5] & ~bVar3;
    }
    bVar3 = bVar3 << 1;
    bVar1 = bVar1 + 1;
  } while (bVar1 <= pbVar2[2]);
  if ((*pbVar2 & 8) != 0) {
    FUN_00383ffe(param_1);
  }
  return;
}
