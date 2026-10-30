/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C0DB9DB2134C1F075507D145F07AA63944CA168FC8A6135D1DF41280F3D4F403
 * Entry: 0x0008e620, Ghidra index: 1732, label: FUN_0008e620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0008e620(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float10 fVar1;
  float fVar2;
  float local_c;
  
  fVar1 = (float10)0.0;
  if (param_3 != (int *)0x0) {
    switch(param_2) {
    case 0:
      return (float10)*param_3;
    case 1:
      return (float10)param_3[1];
    case 2:
      return (float10)param_3[2];
    case 3:
      return (float10)param_3[3];
    case 4:
      return (float10)param_3[4];
    case 5:
      return (float10)(float)param_3[5];
    case 6:
      return (float10)param_3[6];
    case 7:
      return (float10)param_3[7];
    case 8:
      return (float10)param_3[8];
    case 9:
      if ((float)param_3[3] == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = (float)param_3[4] / (float)param_3[3];
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 10:
      if ((float)*param_3 == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = (float)param_3[1] / (float)*param_3;
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 0xb:
      local_c = (float)(param_3[2] + param_3[1]);
      if (local_c == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = (float)param_3[1] / local_c;
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 0xc:
      if ((float)param_3[3] == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = ((float)param_3[1] * 20.0) / (float)param_3[3];
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 0xd:
      if ((float)param_3[4] == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = ((float)param_3[1] * 10.0) / (float)param_3[4];
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 0xe:
      if ((float)param_3[5] * 0.033333 == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = (float)param_3[1] / ((float)param_3[5] * 0.033333);
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      return (float10)fVar2 * (float10)100.0;
    case 0xf:
      if ((float)param_3[5] * 0.01 == 0.0) {
        local_c = 0.0;
      }
      else {
        local_c = (float)param_3[2] / ((float)param_3[5] * 0.01);
      }
      fVar2 = 1.0;
      if (local_c <= 1.0) {
        fVar2 = local_c;
      }
      fVar1 = (float10)fVar2 * (float10)100.0;
    }
  }
  return fVar1;
}
