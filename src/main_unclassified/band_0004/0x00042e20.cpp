/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB2631B7A1D3AA98E46A1D53AD88BDFCA3CFBD11D5CDED45A9AB363D5EDF0956
 * Entry: 0x00042e20, Ghidra index: 518, label: FUN_00042e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern int FUN_0005bca0(void);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_00049ca0(void);
extern void FUN_00023a30(void);
extern float10 FUN_0004a280(float param_1);
extern float10 FUN_0004a330(void);
extern float10 FUN_00039460(void);
extern float10 FUN_00045230(void);
extern uint FUN_00023110(void);
extern void FUN_0004dff0(void);

void FUN_00042e20(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (((*(byte *)(param_1 + 0x17c) & 1) == 0) || (*(float *)(param_1 + 0x178) <= 0.0)) {
    piVar2 = (int *)FUN_000120f0();
    iVar3 = FUN_000120f0();
    if (((iVar3 != 0) &&
        (((*(int *)(iVar3 + 0x59c) != 0 && (piVar4 = (int *)FUN_0005bca0(), piVar4 != (int *)0x0))
         && (piVar4 != piVar2)))) && ((*(byte *)(piVar4 + 0x1c) & 1) == 0)) {
      FUN_000124f0(0x40000000);
      iVar3 = FUN_00049ca0();
      if (iVar3 != 0) {
        FUN_00023a30();
        fVar5 = (float10)FUN_0004a280(param_1);
        if (((float10)0.0 < fVar5) &&
           (fVar6 = (float10)FUN_0004a330(), (float10)(float)fVar5 * (float10)2.5 < fVar6)) {
          (**(code **)(*piVar4 + 0x40))();
          (**(code **)(*piVar2 + 0x40))();
          fVar5 = (float10)FUN_00039460();
          fVar6 = (float10)FUN_00045230();
          if ((fVar6 * (float10)1.5 * fVar6 * (float10)1.5 < (float10)(float)fVar5) &&
             (cVar1 = FUN_00023110(), cVar1 == '\0')) {
            FUN_00049ca0();
            FUN_00012320(0x29);
            FUN_0004dff0(param_1);
            FUN_00012440();
          }
        }
      }
    }
  }
  return;
}
