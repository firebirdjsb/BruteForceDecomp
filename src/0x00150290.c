/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BDE44AEFAD0B0BE7776E80D8A6C20819D50FAA2625331D05F2086DBDABB4615B
 * Entry: 0x00150290, Ghidra index: 4404, label: FUN_00150290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00150290(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  float10 fVar3;
  float fVar4;
  
  (**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0xd0))(*unaff_EDI);
  if (param_1 != 0) {
    if (0.0 <= *(float *)(unaff_ESI + 0x4a0)) {
      fVar3 = (float10)FUN_0001fae0(*(float *)(unaff_ESI + 0x4a0) + 3.1415927);
      fVar4 = (float)fVar3;
    }
    else {
      fVar4 = -1.0;
    }
    if ((*(byte *)((int)unaff_EDI + 0x3d) & 4) != 0) {
      iVar1 = FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),param_1 + 0x14,&stack0xffffffd4,fVar4);
      *(int *)(unaff_ESI + 0x248) = iVar1;
      return iVar1 != 0;
    }
    puVar2 = (undefined4 *)
             FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),param_1 + 0x14,&stack0xffffffd4,fVar4);
    *(undefined4 **)(unaff_ESI + 0x228 + param_2 * 4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x550) = *(undefined4 *)*puVar2;
      *(int *)(unaff_ESI + 0x234 + param_2 * 4) = param_1;
      return true;
    }
  }
  return false;
}
