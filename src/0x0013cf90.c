/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DF750F4AF3A6544047AC3E344E043C8133A6809599BFA01337F4B2EE347B20A
 * Entry: 0x0013cf90, Ghidra index: 4011, label: FUN_0013cf90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013cf90(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int in_ECX;
  
  if ((((*(byte *)(in_ECX + 0x1c) & 1) == 0) || (iVar2 = *(int *)(in_ECX + 0x18), iVar2 == 0)) ||
     ((*(float *)(iVar2 + 0x490) < 0.0 == (*(float *)(iVar2 + 0x490) == 0.0) &&
      ((*(byte *)(iVar2 + 0x70) & 1) == 0)))) {
    cVar4 = FUN_00117210();
    if ((((cVar4 != '\0') && (*(char *)(in_ECX + 0x20) == '\0')) &&
        ((*(int *)(in_ECX + 0x24) == 0x3f800000 || (*(float *)(in_ECX + 0x24) == 0.0)))) &&
       ((((*(byte *)(in_ECX + 0x1c) & 1) != 0 && (*(int *)(in_ECX + 0x18) != 0)) ||
        (fVar1 = *(float *)(*(int *)(in_ECX + 0x18) + 0x490),
        fVar3 = *(float *)(*(int *)(in_ECX + 0x18) + 0x494) * 0.1, fVar3 < fVar1 != (fVar3 == fVar1)
        )))) {
      *(undefined1 *)(in_ECX + 0x20) = 1;
      return 1;
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x20) = 0;
    FUN_0010e3e0();
  }
  return 0;
}
