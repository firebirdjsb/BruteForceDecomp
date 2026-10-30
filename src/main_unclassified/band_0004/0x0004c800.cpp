/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 458B29B0E8F7F3B7CD884A5BC9CF9642E00AF10418153F7FD036F04F040434D5
 * Entry: 0x0004c800, Ghidra index: 637, label: FUN_0004c800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0003a990(void);
extern uint32_t FUN_0001bb00(uint32_t in_EAX);
extern uint32_t FUN_0001ba10(uint32_t unaff_ESI);

bool FUN_0004c800(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  if (param_3 == 0xfe4bc988) {
    if (param_1 != param_2) {
      return false;
    }
    return true;
  }
  if (in_EAX == (int *)0x0) {
    return false;
  }
  iVar4 = (**(code **)(*in_EAX + 0xf4))();
  if (iVar4 == 0) {
    return false;
  }
  (**(code **)(*in_EAX + 0xf4))();
  fVar6 = (float10)FUN_0003a990();
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_0003a990();
  fVar2 = (float)fVar6;
  if (0.0 <= fVar1) {
    if (fVar2 < 0.0) {
      return false;
    }
    cVar3 = FUN_0001bb00();
    if (cVar3 != '\0') {
      return false;
    }
    FUN_0001ba10();
    fVar6 = (float10)FUN_0003a990();
    if (fVar6 <= (float10)fVar2) {
      fVar6 = (float10)fVar2;
    }
    if (param_3 < 0x13cd5fab) {
      if (param_3 == 0x13cd5faa) {
        if (fVar6 < (float10)fVar1 == (fVar6 == (float10)fVar1)) {
          return false;
        }
        return true;
      }
      if (param_3 != 0x8267484) {
        if (param_3 != 0x118bf2e7) {
          return false;
        }
        return param_1 == param_2;
      }
      bVar5 = (float10)fVar1 <= fVar6;
    }
    else {
      if (param_3 != 0x1eab5bc9) {
        if (param_3 != 0xfc443c28) {
          return false;
        }
        if ((float10)fVar1 <= fVar6) {
          return false;
        }
        return true;
      }
      bVar5 = (float10)fVar1 < fVar6;
    }
    if (!bVar5) {
      return false;
    }
    return true;
  }
  return false;
}
