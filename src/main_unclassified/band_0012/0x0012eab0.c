/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB562E4DECFDBD6AA404E1763B37EE9017825B495ED860A383AC7E75FEE28477
 * Entry: 0x0012eab0, Ghidra index: 3818, label: FUN_0012eab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0012eab0(char param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  int in_EAX;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int unaff_ESI;
  float10 fVar7;
  undefined1 local_9;
  float local_4;
  
  local_9 = 0;
  if ((*(byte *)(unaff_ESI + 0x748) & 8) != 0) {
    return 0;
  }
  if ((-1 < in_EAX) && (in_EAX < 0x32)) {
    uVar3 = 0;
    local_4 = -1.0;
    bVar2 = 0;
    if (*(int *)(unaff_ESI + 0x1f8) == 0) {
      piVar5 = *(int **)(in_ECX + 0x2b4);
      iVar6 = 0;
      if (*(int *)(in_ECX + 0x2b0) < 1) {
        return 0;
      }
      while (*piVar5 != in_EAX) {
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0x161;
        if (*(int *)(in_ECX + 0x2b0) <= iVar6) {
          return 0;
        }
      }
    }
    else if (*(int *)(unaff_ESI + 0x1fc) == 0) {
      piVar5 = (int *)0x0;
      local_4 = -1.0;
      bVar2 = 0;
      uVar3 = 0;
    }
    else {
      piVar5 = *(int **)(in_EAX * 0x10 + 0x264 + *(int *)(unaff_ESI + 0x1fc));
      fVar7 = (float10)FUN_0012dde0();
      local_4 = (float)fVar7;
      bVar2 = FUN_0012de00();
      uVar3 = FUN_0012de20();
    }
    if ((piVar5 != (int *)0x0) &&
       (((((*(byte *)((int)piVar5 + 0x252) & 2) == 0 || (*(int *)(unaff_ESI + 0x214) == 0)) ||
         ((*(byte *)(*(int *)(unaff_ESI + 0x214) + 0x3c) & 1) != 0)) ||
        ((*(int *)(unaff_ESI + 0x218) == 0 ||
         ((*(byte *)(*(int *)(unaff_ESI + 0x218) + 0x3c) & 1) != 0)))))) {
      *(float *)(unaff_ESI + 0x208) = local_4;
      bVar1 = *(byte *)(unaff_ESI + 0x261);
      *(undefined1 *)(unaff_ESI + 0x205) = uVar3;
      bVar4 = bVar1 >> 2 & 1;
      *(int **)(unaff_ESI + 0x200) = piVar5;
      *(undefined4 *)(unaff_ESI + 0x20c) = 0;
      *(undefined1 *)(unaff_ESI + 0x206) = 0;
      *(byte *)(unaff_ESI + 0x204) = (bVar4 != 0) - 1U & bVar2;
      if ((*(int *)(unaff_ESI + 0x1fc) == 0) ||
         (((*(byte *)(*(int *)(unaff_ESI + 0x1fc) + 0x250) & 4) != 0 &&
          ((bVar2 == 0 || (bVar4 != 0)))))) {
        *(byte *)(unaff_ESI + 0x260) = *(byte *)(unaff_ESI + 0x260) | 1;
      }
      else {
        *(byte *)(unaff_ESI + 0x260) = *(byte *)(unaff_ESI + 0x260) & 0xfe;
        if ((bVar2 == 0) || (bVar4 != 0)) {
          *(byte *)(unaff_ESI + 0x261) = bVar1 & 8 ^ bVar1;
        }
        else {
          *(byte *)(unaff_ESI + 0x261) = (bVar1 ^ 8) & 8 ^ bVar1;
        }
      }
      local_9 = 1;
      *(byte *)(unaff_ESI + 0x748) =
           (param_1 << 3 ^ *(byte *)(unaff_ESI + 0x748)) & 8 ^ *(byte *)(unaff_ESI + 0x748);
    }
  }
  return local_9;
}
