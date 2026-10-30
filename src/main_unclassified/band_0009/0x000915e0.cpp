/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2AC3CF2D7D47432AF9A27F662FF683671D2C9E8ECC90404E49F0DC4E85AB36BA
 * Entry: 0x000915e0, Ghidra index: 1785, label: FUN_000915e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_0008f670(void), but uses incoming ECX implicitly.
 * Callback/register ABI is ABI_UNVERIFIED; declaration enables C11 inspection only. */
extern void FUN_0001fe00(undefined4 param_1,undefined4 param_2,int param_3,code *param_4);

extern void FUN_0008f670(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1c18;
int FUN_000915e0(byte param_1)

{
  int iVar1;
  uint in_ECX;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(-(uint)(in_ECX != 4) & in_ECX);
  iVar1 = puVar2[2];
  *puVar2 = PTR_FUN_003a1c18;
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,0xc,*(undefined4 *)(iVar1 + -4),FUN_0008f670);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  puVar2[2] = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX - 4);
  }
  return in_ECX - 4;
}
