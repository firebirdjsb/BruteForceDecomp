/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 043DDFCD1F32878390EC549D030BC7ED15253C5F5E8FB5ECC3ABA5F12FE846BB
 * Entry: 0x002514e0, Ghidra index: 8367, label: FUN_002514e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callback/address references (not an ABI verification).
 * Original x86 register, stack and indirect call contracts remain ABI_UNVERIFIED. */
extern undefined4 * FUN_0027e7b0(undefined4 param_1,int param_2,int param_3);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bb190;
extern uint32_t *PTR_s_1_1_3_003bb35c;
undefined4 FUN_002514e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  char *in_EAX;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  undefined4 unaff_ESI;
  bool bVar5;
  
  if (((in_EAX == (char *)0x0) || (*in_EAX != *PTR_s_1_1_3_003bb35c)) || (param_5 != 0x38)) {
    return 0xfffffffa;
  }
  if (in_EDX != 0) {
    *(undefined4 *)(in_EDX + 0x18) = 0;
    if (*(int *)(in_EDX + 0x20) == 0) {
      *(code **)(in_EDX + 0x20) = FUN_0027e7b0;
      *(undefined4 *)(in_EDX + 0x28) = 0;
    }
    if (*(int *)(in_EDX + 0x24) == 0) {
      *(undefined1 **)(in_EDX + 0x24) = &LAB_0027e7e0;
    }
    if (param_1 == -1) {
      param_1 = 6;
    }
    bVar5 = in_ECX < 0;
    if (bVar5) {
      in_ECX = -in_ECX;
    }
    if (((((0 < param_3) && (param_3 < 10)) && ((param_2 == 8 && ((7 < in_ECX && (in_ECX < 0x10)))))
         ) && (-1 < param_1)) && (((param_1 < 10 && (-1 < param_4)) && (param_4 < 3)))) {
      piVar2 = (int *)(**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),1,0x16b8);
      if (piVar2 != (int *)0x0) {
        *(int **)(in_EDX + 0x1c) = piVar2;
        piVar2[6] = (uint)bVar5;
        iVar4 = 1 << ((byte)in_ECX & 0x1f);
        piVar2[10] = in_ECX;
        piVar2[0xb] = iVar4 + -1;
        iVar3 = 1 << ((byte)(param_3 + 7) & 0x1f);
        piVar2[0x12] = param_3 + 7;
        piVar2[0x11] = iVar3;
        piVar2[0x13] = iVar3 + -1;
        *piVar2 = in_EDX;
        piVar2[9] = iVar4;
        piVar2[0x14] = (param_3 + 9U) / 3;
        iVar3 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),iVar4,2);
        piVar2[0xc] = iVar3;
        iVar3 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),piVar2[9],2);
        piVar2[0xe] = iVar3;
        iVar3 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),piVar2[0x11],2);
        piVar2[0xf] = iVar3;
        iVar3 = 1 << ((char)param_3 + 6U & 0x1f);
        piVar2[0x5a5] = iVar3;
        iVar3 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),iVar3,4);
        uVar1 = piVar2[0x5a5];
        piVar2[3] = uVar1 * 4;
        piVar2[2] = iVar3;
        if (((piVar2[0xc] != 0) && (piVar2[0xe] != 0)) && ((piVar2[0xf] != 0 && (iVar3 != 0)))) {
          piVar2[0x5a7] = iVar3 + (uVar1 & 0xfffffffe);
          piVar2[0x5a4] = iVar3 + uVar1 * 3;
          piVar2[0x1f] = param_1;
          piVar2[0x20] = param_4;
          *(undefined1 *)((int)piVar2 + 0x1d) = 8;
          if (((in_EDX != 0) && (iVar3 = *(int *)(in_EDX + 0x1c), iVar3 != 0)) &&
             ((*(int *)(in_EDX + 0x20) != 0 && (*(int *)(in_EDX + 0x24) != 0)))) {
            *(undefined4 *)(in_EDX + 0x14) = 0;
            *(undefined4 *)(in_EDX + 8) = 0;
            *(undefined4 *)(in_EDX + 0x18) = 0;
            *(undefined4 *)(in_EDX + 0x2c) = 2;
            *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
            *(undefined4 *)(iVar3 + 0x14) = 0;
            if (*(int *)(iVar3 + 0x18) < 0) {
              *(undefined4 *)(iVar3 + 0x18) = 0;
            }
            *(uint *)(iVar3 + 4) = (-(uint)(*(int *)(iVar3 + 0x18) != 0) & 0x47) + 0x2a;
            *(undefined4 *)(in_EDX + 0x30) = 1;
            *(undefined4 *)(iVar3 + 0x20) = 0;
            FUN_0027cce0(unaff_ESI);
            FUN_00251ba0();
            return 0;
          }
          return 0xfffffffe;
        }
        *(undefined4 *)(in_EDX + 0x18) = DAT_003bb190;
        FUN_00251a80();
      }
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}
