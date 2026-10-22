/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 729EB2EB3745CCBBB40E087B852EBDD623812AD7DCCB85B3F01BE0DBAC226211
 * Entry: 0x00266050, Ghidra index: 8735, label: FUN_00266050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00266050(void)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *unaff_EDI;
  
  pfVar3 = (float *)FUN_00265e50();
  fVar1 = *pfVar3;
  uVar2 = *(undefined8 *)(pfVar3 + 1);
  unaff_EDI[2] = (float)((ulonglong)uVar2 >> 0x20) * 2.0;
  *unaff_EDI = fVar1 * 2.0;
  unaff_EDI[1] = (float)uVar2 * 2.0;
  return;
}
