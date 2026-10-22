/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92C6CFDCA5C559DBE5980B46D9F5762BFFD5626D90F4E938C2201EBB9477988B
 * Entry: 0x00346c3a, Ghidra index: 12837, label: FUN_00346c3a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_00346c3a(short param_1,int param_2,short param_3,char param_4,int param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)0x0;
  puVar1 = (uint *)(in_ECX + 0xbd8);
  uVar4 = 3;
  puVar3 = (undefined4 *)(-(uint)((uint *)*puVar1 != puVar1) & *puVar1);
  do {
    if (puVar3 == (undefined4 *)0x0) {
      return puVar2;
    }
    if ((((~((uint)puVar3[3] >> 1) & 1) == (uint)(param_4 == '\x02')) &&
        (*(short *)((int)puVar3 + 0x4a) == param_1)) &&
       ((uVar5 = 0, param_5 == 0 || ((puVar3[3] & 0x1000000) == 0)))) {
      if (puVar3[0x11] != param_2) {
        if (puVar3[0x11] != 0) goto LAB_00346cba;
        uVar5 = 1;
      }
      if (*(short *)(puVar3 + 0x12) != param_3) {
        if (*(short *)(puVar3 + 0x12) != 0) goto LAB_00346cba;
        uVar5 = uVar5 + 1;
      }
      if (uVar5 == 0) {
        return puVar3;
      }
      if (uVar5 < uVar4) {
        puVar2 = puVar3;
        uVar4 = uVar5;
      }
    }
LAB_00346cba:
    puVar3 = (undefined4 *)(-(uint)((uint *)*puVar3 != puVar1) & (uint)*puVar3);
  } while( true );
}
