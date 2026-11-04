/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE917347021FB645BEE1863CEDBAF1BAE6ED11D653EDB364D5635C239E0FAD81
 * Entry: 0x000f9470, Ghidra index: 3124, label: FUN_000f9470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 declaration; Xbox register/stack ABI_UNVERIFIED. */
extern undefined4 FUN_000f93c0(void);
/* Callee 0x002E5880 returns a guest byte through AL and reads an
 * implicit incoming ECX object address. Existing draft interface only;
 * original guest-register ABI is UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* 0x002E5BF0 draft: one explicit int, 32-bit EAX return; implicit
 * incoming guest ECX and native 1:1 calling ABI remain UNVERIFIED. */
extern undefined4 FUN_002e5bf0(int guest_index);
/* Source draft 0x00106600 returns 32-bit EAX; callers test low AL.
 * Native calling ABI and guest data dependencies remain unverified. */
extern uint FUN_00106600(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
undefined4 FUN_000f9470(void)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar2 = FUN_002e5bf0(0);
      if (*(int *)(iVar2 + 0x2c) != 0) {
        return 0;
      }
    }
  }
  cVar1 = FUN_00106600();
  if (cVar1 != '\0') {
    cVar1 = FUN_000f93c0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
