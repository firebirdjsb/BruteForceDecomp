/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45F417F6C287C139CE5043078C89C6CC44B796B77AA2F1FDC6211C3CAE0A7657
 * Entry: 0x000f6e80, Ghidra index: 3092, label: FUN_000f6e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee 0x002E5880 returns a guest byte through AL and reads an
 * implicit incoming ECX object address. Existing draft interface only;
 * original guest-register ABI is UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* 0x002E5BF0 draft: one explicit int, 32-bit EAX return; implicit
 * incoming guest ECX and native 1:1 calling ABI remain UNVERIFIED. */
extern undefined4 FUN_002e5bf0(int guest_index);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
char FUN_000f6e80(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar2 = FUN_002e5bf0(0);
      iVar2 = *(int *)(iVar2 + 0x2c);
    }
    else {
      iVar2 = 0;
    }
  }
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
    return '\0';
  }
  return (iVar2 != 0) * '\x02' + '\x02';
}
