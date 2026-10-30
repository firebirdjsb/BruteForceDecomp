/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 82E33DB065B0A4347B5CA778790EA8EA14F8BF9A730EDD44831A0ABB5D740E92
 * Entry: 0x0035027b, Ghidra index: 13048, label: FUN_0035027b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035027b(int param_1,short param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  KeRaiseIrqlToDpcLevel();
  uVar3 = 0;
  if (param_2 == 0) {
    uVar2 = 0x20c;
  }
  else {
    uVar2 = CONCAT11((char)param_2,(char)((ushort)param_2 >> 8));
  }
  *(undefined2 *)(in_ECX + 0x8c6) = uVar2;
  if (((0xb < *(byte *)(in_ECX + 0x8c0)) && (*(byte *)(in_ECX + 0x8c0) < 0xf)) &&
     ((piVar1 = (int *)(in_ECX + 0x92c), *piVar1 != 0 || (*(short *)(in_ECX + 0x930) != 0)))) {
    *(int *)(param_1 + 0x18c) = *piVar1;
    *(undefined2 *)(param_1 + 400) = *(undefined2 *)(in_ECX + 0x930);
    *(short *)(param_1 + 0x192) = param_2;
    *(undefined2 *)(in_ECX + 0x916) = 0;
    *(int *)(in_ECX + 0x910) = *piVar1;
    *(undefined2 *)(in_ECX + 0x914) = *(undefined2 *)(in_ECX + 0x930);
    uVar3 = 1;
  }
  KfLowerIrql();
  return uVar3;
}
