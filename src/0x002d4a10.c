/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDB7F8AB25DCD56DB1C3B4D31AF96F5280F2CE35017284C90DBB3DCB6CCFFD17
 * Entry: 0x002d4a10, Ghidra index: 10210, label: FUN_002d4a10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002d4a10(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  float local_10;
  undefined8 local_c;
  undefined4 local_4;
  
  local_14 = 0;
  local_1c = param_2[1];
  fStack_18 = param_2[2];
  local_20 = *param_2;
  iVar2 = 0xf8;
  do {
    local_4 = 0;
    pfVar1 = *(float **)(iVar2 + -0xd8 + param_1);
    local_10 = *pfVar1 * local_20 + pfVar1[4] * local_1c + pfVar1[8] * fStack_18;
    local_c = CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar1 + 1) >> 0x20) * local_20 +
                       (float)((ulonglong)*(undefined8 *)(pfVar1 + 5) >> 0x20) * local_1c +
                       (float)((ulonglong)*(undefined8 *)(pfVar1 + 9) >> 0x20) * fStack_18,
                       (float)*(undefined8 *)(pfVar1 + 1) * local_20 +
                       (float)*(undefined8 *)(pfVar1 + 5) * local_1c +
                       (float)*(undefined8 *)(pfVar1 + 9) * fStack_18);
    fVar3 = (float10)FUN_002ba7f0(*(undefined4 *)(iVar2 + -8 + param_1),
                                  *(undefined4 *)(iVar2 + param_1),&local_10,&local_20);
    *(float *)(iVar2 + -0xf0 + param_1) = (float)fVar3;
    iVar2 = iVar2 + -4;
    local_20 = local_20 * -1.0;
    local_1c = local_1c * -1.0;
    fStack_18 = fStack_18 * -1.0;
  } while (0xf3 < iVar2);
  if ((**(byte **)(param_1 + 0xec) & 0xc) != 0) {
    *(float *)(param_1 + 4) = *(float *)(param_1 + 8) * 100000.0;
  }
  if ((**(byte **)(param_1 + 0xf0) & 0xc) != 0) {
    *(float *)(param_1 + 8) = *(float *)(param_1 + 4) * 100000.0;
  }
  return;
}
