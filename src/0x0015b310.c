/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B156C95C9D448745D260CDFAC14D9EABF39EC4D5062F6C9379D7255F0A1E032
 * Entry: 0x0015b310, Ghidra index: 4524, label: FUN_0015b310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015b310(float param_1,undefined1 param_2,float param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  float local_c;
  float local_8;
  float local_4;
  
  cVar1 = *(char *)((int)param_1 + 0x7a);
  if ((cVar1 == '\0') || (('\x03' < cVar1 && (cVar1 < '\x06')))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  *(undefined1 *)((int)param_1 + 0x7a) = param_2;
  cVar1 = *(char *)((int)param_1 + 0x7a);
  if ((cVar1 == '\0') || (('\x03' < cVar1 && (cVar1 < '\x06')))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar2) {
    if (!bVar3) {
      local_c = param_1;
      FUN_000e0860(&local_c);
    }
  }
  else if (bVar3) {
    FUN_000dfb80(param_1);
  }
  local_c = *(float *)((int)param_1 + 0x10c);
  local_8 = param_3;
  local_4 = param_3;
  if (param_3 <= local_c) {
    local_4 = local_c;
  }
  *(float *)((int)param_1 + 0x10c) = local_4;
  if (((0.0 < *(float *)((int)param_1 + 0x10c)) && ((*(byte *)((int)param_1 + 0x26) & 0x10) == 0))
     && (*(int *)((int)param_1 + 8) != 0)) {
    puVar4 = (undefined4 *)FUN_000e0350(*(int *)((int)param_1 + 8),&local_4,param_1);
    *(undefined4 *)((int)param_1 + 0x14) = *puVar4;
    *(byte *)((int)param_1 + 0x26) = *(byte *)((int)param_1 + 0x26) | 0x10;
  }
  return;
}
