/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B80116658556C46156C5798E110B521409A572D17B22C7999208B1664F77CF3E
 * Entry: 0x0006c660, Ghidra index: 1226, label: FUN_0006c660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0006e450(float param_1);
extern void FUN_0006ad90(void);
extern void FUN_0006c840(int param_1);

void FUN_0006c660(void)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  char in_AL;
  int in_ECX;
  float10 fVar4;
  
  if (in_AL == '\0') {
    fVar1 = *(float *)(in_ECX + 200) + 5.0;
  }
  else {
    fVar1 = *(float *)(in_ECX + 200) - 5.0;
  }
  *(float *)(in_ECX + 200) = fVar1;
  fVar4 = (float10)(**(code **)(*(int *)(in_ECX + 0x48) + 0x2c))();
  fVar1 = (float)fVar4;
  bVar2 = *(byte *)(in_ECX + 0x4c);
  FUN_0006e450(*(undefined4 *)(in_ECX + 200));
  iVar3 = *(int *)(in_ECX + 0x50);
  *(byte *)(in_ECX + 0x4c) =
       *(byte *)(in_ECX + 0x4c) ^ ((bVar2 >> 5 & 1) << 5 ^ *(byte *)(in_ECX + 0x4c)) & 0x20;
  if (*(float *)(iVar3 + 0x2c) != fVar1) {
    *(float *)(iVar3 + 0x2c) = fVar1;
    *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x24) / fVar1;
    FUN_0006ad90();
  }
  FUN_0006c840(in_ECX);
  return;
}
