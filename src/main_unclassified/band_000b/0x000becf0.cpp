/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91C990682EF2D8E4DB9BFB161ADD72C2F8D80242E1FDF247AF12A62D3FCAE0C6
 * Entry: 0x000becf0, Ghidra index: 2326, label: FUN_000becf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

extern void FUN_0006dfc0(int *param_1,float *param_2,float param_3,float param_4);

int FUN_000becf0(int param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,float *param_7,float param_8)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  float fStack_60;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [8];
  float fStack_30;
  undefined4 auStack_2c [11];
  
  *param_2 = 0;
  FUN_0006dfc0(param_3,&local_5c,param_4,param_5);
  fVar5 = 1.0 / SQRT(local_5c * local_5c + local_58 * local_58 + local_54 * local_54);
  local_5c = local_5c * fVar5;
  local_58 = local_58 * fVar5;
  local_54 = local_54 * fVar5;
  pfVar1 = (float *)(**(code **)(param_3[0x12] + 0xc))();
  fStack_48 = pfVar1[2];
  fStack_4c = pfVar1[1];
  fStack_50 = *pfVar1;
  iVar2 = (**(code **)(*param_3 + 0x130))(fStack_4c);
  /* Original 0x000BED94-0x000BEDB9: fld/fstp m32fp load the two
   * observed source components independently, then MOV their raw
   * 32-bit stack words into [esp+0x2c] and [esp+0x28]. Ghidra
   * erroneously merged the two adjacent float locals into a
   * synthetic 64-bit CONCAT44 assignment to an undeclared symbol.
   * The vtable call producing iVar2 remains ABI_UNVERIFIED. */
  fStack_3c = *(float *)(iVar2 + 0x20);
  fStack_40 = *(float *)(iVar2 + 0x14);
  fVar5 = *(float *)(iVar2 + 8) * local_5c +
          *(float *)(iVar2 + 0x14) * local_58 + *(float *)(iVar2 + 0x20) * local_54;
  if (1.1920929e-07 < ABS(fVar5)) {
    fVar4 = (float10)(**(code **)(param_3[0x12] + 0x24))();
    if ((float10)0.0 <= -(fVar4 / (float10)fVar5)) {
      fStack_3c = (float)-(fVar4 / (float10)fVar5);
      fStack_44 = fStack_3c * local_5c;
      fStack_40 = fStack_3c * local_58;
      fStack_3c = fStack_3c * local_54;
      fStack_50 = fStack_50 + fStack_44;
      goto LAB_000beeb7;
    }
  }
  fStack_3c = local_54 * 2.0;
  fStack_40 = local_58 * 2.0;
  fStack_44 = local_5c * 2.0;
  fStack_50 = fStack_44 + fStack_50;
LAB_000beeb7:
  fStack_4c = fStack_40 + fStack_4c;
  fStack_30 = fStack_3c;
  fStack_48 = fStack_3c + fStack_48;
  puVar3 = auStack_2c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  fStack_60 = param_8;
  if (*(float *)(param_1 + 0x48) <= param_8) {
    fStack_60 = *(float *)(param_1 + 0x48);
  }
  iVar2 = FUN_000ddd10(param_3[2],&fStack_60,&fStack_44,auStack_38,&fStack_50,&local_5c,param_6,
                       fStack_60,0);
  if ((iVar2 < 1) || (2 < iVar2)) {
    *param_7 = param_8 * local_5c + fStack_50;
    param_7[1] = param_8 * local_58 + fStack_4c;
    param_7[2] = param_8 * local_54 + fStack_48;
  }
  else {
    *param_7 = fStack_44;
    param_7[1] = fStack_40;
    param_7[2] = fStack_3c;
  }
  if (iVar2 == 2) {
    *param_2 = auStack_2c[1];
  }
  return iVar2;
}
