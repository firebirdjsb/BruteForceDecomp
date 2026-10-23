/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7AC8194356DCDBD7C708646705CEDFF4B82EB00EBC3A6B88777E134B163ED5A
 * Entry: 0x0023a0c0, Ghidra index: 7897, label: FUN_0023a0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
undefined4 FUN_0023a0c0(void)

{
  char *in_EAX;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *unaff_EBX;
  char acStack_810 [8];
  undefined4 *puStack_c;
  uint *puStack_8;
  
  acStack_810[4] = '\0';
  acStack_810[5] = '\0';
  acStack_810[6] = '\0';
  acStack_810[7] = '\0';
  acStack_810[0] = '\x10';
  acStack_810[1] = '\0';
  acStack_810[2] = '\0';
  acStack_810[3] = '\0';
  (**(code **)(*unaff_EBX + 0x10))();
  if ((((*in_EAX == 'B') && (in_EAX[1] == 'X')) && (in_EAX[2] == 'M')) && (in_EAX[3] == 'L')) {
    *puStack_c = *(undefined4 *)(in_EAX + 0xc);
    in_EAX[0xc] = '\0';
    in_EAX[0xd] = '\0';
    in_EAX[0xe] = '\0';
    in_EAX[0xf] = '\0';
    uVar1 = FUN_00238370();
    do {
      iVar2 = (**(code **)(*unaff_EBX + 0x10))();
      if (iVar2 < 0) {
        return 0x80004005;
      }
      if ((in_EAX != (char *)0x0) && (acStack_810 != acStack_810 + (int)in_EAX)) {
        uVar1 = ~uVar1;
        pcVar3 = acStack_810;
        do {
          uVar1 = uVar1 >> 8 ^
                  *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[*pcVar3] ^ uVar1) & 0xff) * 4);
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 != acStack_810 + (int)in_EAX);
        uVar1 = ~uVar1;
      }
    } while (in_EAX == (char *)0x800);
    *puStack_8 = uVar1;
    return 0;
  }
  return 0x80004005;
}
