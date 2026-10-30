/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 121C7A9237EAF1FDCE668658BE0438E0048F462CE2D45B4FE5AF1D22ECCFD697
 * Entry: 0x002e97b0, Ghidra index: 10555, label: FUN_002e97b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e97b0(ushort *param_1)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  int *in_ECX;
  byte unaff_retaddr;
  
  puVar1 = param_1;
  in_ECX[0x10] = in_ECX[0x10] + 1;
  if (((char)in_ECX[10] == '\0') || (in_ECX[1] == 0)) {
    FUN_002e8f50(param_1);
    return;
  }
  if (in_ECX[3] != 0) {
    return;
  }
  if ((uint)in_ECX[0xc] <= (uint)in_ECX[2]) {
    *param_1 = 0;
    if (*(short *)(in_ECX[0xd] + in_ECX[0xf] * 2) == 0) {
      iVar2 = (**(code **)(*in_ECX + 0x18))(&param_1);
      if (iVar2 < 0) {
        return;
      }
      bVar3 = (byte)param_1;
    }
    else {
      bVar3 = *(byte *)(in_ECX[0xd] + in_ECX[0xf] * 2);
      in_ECX[0xc] = in_ECX[0xc] + 1;
      /* Original MOV BYTE PTR [ESP+0x0C],CL changes the low byte of the guest32 argument slot. */
      param_1 = (ushort *)(uintptr_t)(((uint32_t)(uintptr_t)param_1 & UINT32_C(0xffffff00)) | bVar3);
      in_ECX[2] = in_ECX[2] + 1;
      iVar2 = 0;
    }
    if ((char)bVar3 < '\0') {
      *(ushort *)(in_ECX[0xd] + in_ECX[0xf] * 2) = (ushort)bVar3;
      *puVar1 = ((byte)param_1 & 0x7f) << 8;
      iVar2 = (**(code **)(*in_ECX + 0x18))(&param_1);
      bVar3 = unaff_retaddr;
    }
    if (iVar2 < 0) {
      in_ECX[0xc] = in_ECX[0xc] + -1;
      return;
    }
    *puVar1 = *puVar1 | (ushort)bVar3;
    *(ushort *)(in_ECX[0xd] + in_ECX[0xf] * 2) = *puVar1;
    in_ECX[0xf] = in_ECX[0xf] + 1;
    return;
  }
  *param_1 = *(ushort *)(in_ECX[0xd] + in_ECX[0xf] * 2);
  in_ECX[0xf] = in_ECX[0xf] + 1;
  in_ECX[2] = in_ECX[2] + (0x7f < *param_1) + 1;
  return;
}
