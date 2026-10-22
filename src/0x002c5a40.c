/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 284AE24F64D6BF30858A056656D1911F025CD502709A2EEABC6CC9804C748BFA
 * Entry: 0x002c5a40, Ghidra index: 10068, label: FUN_002c5a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c5a40(float *param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)FUN_002c5560(param_1,param_1[0x11],param_1[0x14],param_1[0x15],
                                param_2 * param_1[0x16]);
  fVar5 = (float10)FUN_002c5560(param_1,param_1[0xc],param_1[0xf],param_1[0x10],
                                param_2 * param_1[0x17]);
  if ((*(byte *)param_1[0x18] & 0xc) == 0) {
    FUN_002b8d10((byte *)param_1[0x18] + 0x8c,param_1,(float)fVar5 * param_1[0xf]);
    FUN_002b8d10((int)param_1[0x18] + 0x7c,param_1 + 4,(float)fVar4 * param_1[0x14]);
  }
  *param_1 = *param_1 * -1.0;
  param_1[1] = param_1[1] * -1.0;
  param_1[2] = param_1[2] * -1.0;
  fVar2 = param_1[0x19];
  fVar3 = (float)fVar5 * param_1[0x10];
  uVar1 = *(undefined8 *)(param_1 + 1);
  *(float *)((int)fVar2 + 0x8c) = *(float *)((int)fVar2 + 0x8c) + *param_1 * fVar3;
  *(ulonglong *)((int)fVar2 + 0x90) =
       CONCAT44((float)((ulonglong)*(undefined8 *)((int)fVar2 + 0x90) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20) * fVar3,
                (float)*(undefined8 *)((int)fVar2 + 0x90) + (float)uVar1 * fVar3);
  fVar3 = (float)fVar4 * param_1[0x15];
  fVar2 = param_1[0x19];
  uVar1 = *(undefined8 *)(param_1 + 9);
  *(float *)((int)fVar2 + 0x7c) = *(float *)((int)fVar2 + 0x7c) + param_1[8] * fVar3;
  *(ulonglong *)((int)fVar2 + 0x80) =
       CONCAT44((float)((ulonglong)*(undefined8 *)((int)fVar2 + 0x80) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20) * fVar3,
                (float)*(undefined8 *)((int)fVar2 + 0x80) + (float)uVar1 * fVar3);
  return;
}
