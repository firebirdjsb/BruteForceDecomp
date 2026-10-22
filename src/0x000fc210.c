/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7692D5AE7242C8D795D26EE3759A1D0FF86722903E9CAB402BB4D78AA999DC2
 * Entry: 0x000fc210, Ghidra index: 3151, label: FUN_000fc210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
extern uint32_t PTR_PTR_00401054;
int * FUN_000fc210(void)

{
  int iVar1;
  byte bVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)0x0;
  if (*in_EAX == DAT_0046d064) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x80))(in_EAX + 3,in_EAX[4]);
  }
  else {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x7c))();
  }
  if (piVar3 != (int *)0x0) {
    iVar4 = FUN_002ea01d(0xb4);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_000ff7b0();
    }
    if (in_EAX[5] == 0) {
      if (in_EAX[2] != 0) {
        piVar5[0x2a] = *(int *)(in_EAX[2] + 0xa8);
      }
    }
    else {
      piVar5[0x2a] = in_EAX[5];
    }
    piVar5[1] = in_EAX[2];
    if ((in_EAX[2] != 0) &&
       (bVar2 = *(byte *)(in_EAX[2] + 0x28) >> 5 & 1,
       *(byte *)(piVar5 + 10) =
            *(byte *)(piVar5 + 10) ^ (bVar2 << 5 ^ *(byte *)(piVar5 + 10)) & 0x20, bVar2 != 0)) {
      *(byte *)((int)piVar5 + 0x66) = *(byte *)((int)piVar5 + 0x66) & 0xfe;
    }
    iVar4 = piVar3[2];
    iVar1 = piVar3[1];
    if ((char)piVar3[7] != '\0') {
      piVar5[2] = in_EAX[2];
      (**(code **)(*piVar5 + 0x30))();
    }
    piVar5[4] = iVar4;
    piVar5[3] = iVar1;
    (**(code **)(*piVar5 + 0x1c))();
    piVar5[5] = piVar3[3];
    (**(code **)(*piVar5 + 0x1c))();
    piVar5[6] = piVar3[4];
    (**(code **)(*piVar5 + 0x1c))();
    bVar2 = *(byte *)(piVar5 + 0x19) ^ (*(byte *)(piVar3 + 5) ^ *(byte *)(piVar5 + 0x19)) & 1;
    *(byte *)(piVar5 + 0x19) = bVar2;
    *(byte *)(piVar5 + 0x19) = (*(char *)((int)piVar3 + 0x15) << 1 ^ bVar2) & 2 ^ bVar2;
    piVar5[9] = *piVar3;
    (**(code **)(*piVar5 + 0x2c))();
    piVar5[0x18] = 0;
    if (piVar3[6] == -0x1bb22aaa) {
      if (in_EAX[2] != 0) {
        piVar5[0x18] = *(int *)(in_EAX[2] + 0x60);
      }
    }
    else if (piVar3[6] == 0x14a9771) {
      piVar5[0x18] = in_EAX[1];
    }
    piVar5[0x27] = in_EAX[4];
    piVar5[0x26] = in_EAX[3];
    *(byte *)((int)piVar5 + 0x65) =
         (*(byte *)(in_EAX + 6) >> 1 & 1) << 1 | *(byte *)(in_EAX + 6) & 1 |
         *(byte *)((int)piVar5 + 0x65) & 0xfc;
    piVar5[0x24] = (int)&PTR_PTR_00401054;
    FUN_000fc0d0(in_EAX + 3);
    FUN_000fd9a0(piVar5,piVar3 + 8);
    FUN_000fc150(piVar5);
  }
  return piVar5;
}
