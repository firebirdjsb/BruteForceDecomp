/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3066DA32F69FB3F4260B3EC0AE45A0D432EAFF6842D168D680295ED1947DBEF
 * Entry: 0x00233590, Ghidra index: 7784, label: FUN_00233590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00233590(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  float *in_ECX;
  float *in_EDX;
  char unaff_BL;
  float *unaff_ESI;
  float10 fVar4;
  float fVar5;
  
  fVar1 = in_EAX[6];
  fVar3 = *in_EAX;
  fVar2 = in_EAX[3];
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar5 <= 1.9073486e-06) {
    if (unaff_BL != '\0') {
      fVar4 = (float10)fpatan((float10)in_EAX[5],-(float10)in_EAX[4]);
      *unaff_ESI = (float)fVar4;
      fVar4 = (float10)fpatan((float10)fVar1,-(float10)fVar5);
      *in_EDX = (float)fVar4;
      *in_ECX = 0.0;
      return;
    }
    fVar4 = (float10)fpatan(-(float10)in_EAX[5],(float10)in_EAX[4]);
    *unaff_ESI = (float)fVar4;
    fVar4 = (float10)fpatan(-(float10)fVar1,(float10)fVar5);
    *in_EDX = (float)fVar4;
    *in_ECX = 0.0;
    return;
  }
  if (unaff_BL != '\0') {
    fVar4 = (float10)fpatan((float10)in_EAX[7],-(float10)in_EAX[8]);
    *unaff_ESI = (float)fVar4;
    fVar4 = (float10)fpatan(-(float10)fVar1,-(float10)fVar5);
    *in_EDX = (float)fVar4;
    fVar4 = (float10)fpatan((float10)fVar2,-(float10)fVar3);
    *in_ECX = (float)fVar4;
    return;
  }
  fVar4 = (float10)fpatan((float10)in_EAX[7],(float10)in_EAX[8]);
  *unaff_ESI = (float)fVar4;
  fVar4 = (float10)fpatan(-(float10)fVar1,(float10)fVar5);
  *in_EDX = (float)fVar4;
  fVar4 = (float10)fpatan((float10)fVar2,(float10)fVar3);
  *in_ECX = (float)fVar4;
  return;
}
