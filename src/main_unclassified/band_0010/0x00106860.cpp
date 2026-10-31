/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF3E30192D377B9B3493C27151BAAAFA721DAEF4EDAB80C9DE8D90C31AB0CB04
 * Entry: 0x00106860, Ghidra index: 3359, label: FUN_00106860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern float10 FUN_001067a0(void);
float10 FUN_00106860(float *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  
  fVar1 = param_1[1];
  pfVar2 = param_1 + 7;
  iVar3 = 2;
  do {
    if (((pfVar2[-2] != 0.0) && (0.0 < *pfVar2)) && (*(char *)(pfVar2 + 1) == '\0')) {
      fVar1 = fVar1 + *pfVar2;
    }
    if (((pfVar2[2] != 0.0) && (0.0 < pfVar2[4])) && (*(char *)(pfVar2 + 5) == '\0')) {
      fVar1 = fVar1 + pfVar2[4];
    }
    if (((pfVar2[6] != 0.0) && (0.0 < pfVar2[8])) && (*(char *)(pfVar2 + 9) == '\0')) {
      fVar1 = fVar1 + pfVar2[8];
    }
    if (((pfVar2[10] != 0.0) && (0.0 < pfVar2[0xc])) && (*(char *)(pfVar2 + 0xd) == '\0')) {
      fVar1 = fVar1 + pfVar2[0xc];
    }
    if (((pfVar2[0xe] != 0.0) && (0.0 < pfVar2[0x10])) && (*(char *)(pfVar2 + 0x11) == '\0')) {
      fVar1 = fVar1 + pfVar2[0x10];
    }
    if (((pfVar2[0x12] != 0.0) && (0.0 < pfVar2[0x14])) && (*(char *)(pfVar2 + 0x15) == '\0')) {
      fVar1 = fVar1 + pfVar2[0x14];
    }
    pfVar2 = pfVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar5 = ((float)(int)param_1[4] * 0.1 + 1.0) * (*param_1 / ((float)(int)param_1[3] * 0.1 + 1.0));
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  fVar1 = 0.0;
  param_1 = param_1 + 7;
  iVar3 = 2;
  do {
    if (((param_1[-2] != 0.0) && (0.0 < *param_1)) && (*(char *)(param_1 + 1) != '\0')) {
      fVar1 = fVar1 + *param_1;
    }
    if (((param_1[2] != 0.0) && (0.0 < param_1[4])) && (*(char *)(param_1 + 5) != '\0')) {
      fVar1 = fVar1 + param_1[4];
    }
    if (((param_1[6] != 0.0) && (0.0 < param_1[8])) && (*(char *)(param_1 + 9) != '\0')) {
      fVar1 = fVar1 + param_1[8];
    }
    if (((param_1[10] != 0.0) && (0.0 < param_1[0xc])) && (*(char *)(param_1 + 0xd) != '\0')) {
      fVar1 = fVar1 + param_1[0xc];
    }
    if (((param_1[0xe] != 0.0) && (0.0 < param_1[0x10])) && (*(char *)(param_1 + 0x11) != '\0')) {
      fVar1 = fVar1 + param_1[0x10];
    }
    if (((param_1[0x12] != 0.0) && (0.0 < param_1[0x14])) && (*(char *)(param_1 + 0x15) != '\0')) {
      fVar1 = fVar1 + param_1[0x14];
    }
    param_1 = param_1 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar4 = (float10)FUN_001067a0();
  return fVar4 + (float10)fVar5 + (float10)fVar1;
}
