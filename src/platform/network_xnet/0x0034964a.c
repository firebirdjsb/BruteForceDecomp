/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B52393B83A4078AE4EF7A6464C6DCFEE65936A20AF7990B666FCD0D08F29DB60
 * Entry: 0x0034964a, Ghidra index: 12917, label: FUN_0034964a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034964a(ushort *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int in_ECX;
  
  bVar1 = (byte)param_1[1];
  if ((bVar1 != 0) && (bVar1 != 1)) {
    if ((5 < bVar1) && ((*param_1 & 8) == 0)) {
      *param_1 = *param_1 | 8;
      FUN_00349413(param_1,param_2);
    }
    FUN_00345eda(*(undefined4 *)(param_1 + 2));
    uVar3 = param_1[1];
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = *param_1 & 0x17;
    *(undefined1 *)((int)param_1 + 3) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    FUN_0034c35a(param_1 + 0x1a,0xffffffff);
    FUN_0034c9cf(in_ECX);
    if ((char)uVar3 == '\b') {
      FUN_0034886e();
    }
    uVar3 = *param_1;
    if ((uVar3 & 2) != 0) {
      param_1[0x5c] = 0;
      param_1[0x5d] = 0;
      param_1[0x5e] = 0;
    }
    if (((uVar3 & 4) != 0) &&
       (iVar2 = *(int *)(param_1 + 0x94), param_1[0x70] = 0, param_1[0x71] = 0, iVar2 != 0)) {
      FUN_0034fd39(param_1);
    }
    if (*(ushort **)(in_ECX + 0xae8) == param_1) {
      *(undefined4 *)(in_ECX + 0xae4) = 1;
      KeSetEvent(*(undefined4 *)(in_ECX + 0xaec),1,0);
    }
  }
  return;
}
