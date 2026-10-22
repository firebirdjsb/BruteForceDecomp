/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 286236A30AA46214591732F3BA040FE855AAFF9E1E4BBDB92FD4FC885C055E2B
 * Entry: 0x002958c0, Ghidra index: 9324, label: FUN_002958c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s___100s__last_token_read_____50s__00404560[];
void FUN_002958c0(undefined4 param_1)

{
  char *in_EAX;
  int unaff_EDI;
  undefined1 local_50 [80];
  
  FUN_002953d0();
  if (*in_EAX == '\0') {
    in_EAX = s_<eof>_00404598;
  }
  FUN_00295370(s___100s__last_token_read_____50s__00404560,param_1,in_EAX,
               *(undefined4 *)(unaff_EDI + 0x1c),local_50);
  return;
}
