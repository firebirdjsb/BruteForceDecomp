/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7EB0A8567889DFF69C95F9CBB9AB7143556D323282D5615610A3B2D89159698
 * Entry: 0x000c0fb0, Ghidra index: 2347, label: FUN_000c0fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000bb220(void);
extern int FUN_000c8700(int param_1);
extern void FUN_000c0940(void);
extern void FUN_000c08f0(void);
extern void FUN_000c0ae0(void);
extern void FUN_000c0cf0(float param_1);
extern void FUN_000c09a0(int param_1);
extern void FUN_000c0d90(int param_1);
extern void FUN_000ba730(void);
extern void FUN_000b21f0(undefined4 param_1);

extern uint32_t DAT_00469aac;
extern uint32_t *DAT_00469b54;
void FUN_000c0fb0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x34) + 0x60);
  if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x10), iVar1 == 0)) ||
     ((*(byte *)(iVar1 + 0x70) & 1) != 0)) {
    if (((*(byte *)(in_ECX + 0xbc) & 1) != 0) &&
       (*(byte *)(in_ECX + 0xbc) = *(byte *)(in_ECX + 0xbc) & 0xfb | 8,
       *(char *)(in_ECX + 0x7c) == '\0')) {
      FUN_000bb220(0x15262e1b);
    }
    iVar1 = *(int *)(in_ECX + 0x78);
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined1 *)(iVar1 + 0x5c) = 0;
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x68));
  }
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  if (*(int *)(in_ECX + 0x78) != 0) {
    FUN_000c8700(in_ECX + 100);
  }
  FUN_000c0940();
  FUN_000c08f0();
  *(byte *)(in_ECX + 0x13) =
       *(byte *)(in_ECX + 0x13) ^ (~*(byte *)(in_ECX + 0xbc) ^ *(byte *)(in_ECX + 0x13)) & 1;
  cVar2 = (**(code **)(**(int **)(DAT_00469aac + 0xbec) + 0x30))();
  if ((cVar2 != '\0') && ((*(byte *)(in_ECX + 0xbc) & 2) != 0)) {
    (**(code **)(*DAT_00469b54 + 0xc))(0);
    *(byte *)(in_ECX + 0xbc) = *(byte *)(in_ECX + 0xbc) & 0xfd;
  }
  FUN_000c0ae0();
  FUN_000c0cf0(param_1);
  FUN_000c09a0(in_ECX);
  if (((*(byte *)(in_ECX + 0xbc) & 1) != 0) && ((*(byte *)(in_ECX + 0xbc) & 8) == 0)) {
    FUN_000c0d90(in_ECX);
  }
  FUN_000ba730(param_1);
  FUN_000b21f0(param_1);
  return;
}
