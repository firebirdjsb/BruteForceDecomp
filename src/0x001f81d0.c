/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E447220B272ED4EEC0A1364B587293A461F6248CCBFEE481901A25BD24DC7951
 * Entry: 0x001f81d0, Ghidra index: 7060, label: FUN_001f81d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f81d0(code *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  cVar4 = (*param_1)();
  if (cVar4 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    uVar3 = unaff_ESI[2];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
    unaff_EDI[2] = uVar3;
  }
  cVar4 = (*param_1)();
  if (cVar4 != '\0') {
    uVar1 = *in_EAX;
    uVar2 = in_EAX[1];
    uVar3 = in_EAX[2];
    *in_EAX = *unaff_ESI;
    in_EAX[1] = unaff_ESI[1];
    in_EAX[2] = unaff_ESI[2];
    *unaff_ESI = uVar1;
    unaff_ESI[1] = uVar2;
    unaff_ESI[2] = uVar3;
  }
  cVar4 = (*param_1)();
  if (cVar4 != '\0') {
    uVar1 = *unaff_ESI;
    uVar2 = unaff_ESI[1];
    uVar3 = unaff_ESI[2];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    *unaff_EDI = uVar1;
    unaff_EDI[1] = uVar2;
    unaff_EDI[2] = uVar3;
  }
  return;
}
