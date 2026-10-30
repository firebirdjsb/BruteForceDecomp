/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19E4EE656B499F7C2F5398256CFB7F91EA870D850E6143F67E959C357F66C235
 * Entry: 0x000ba730, Ghidra index: 2265, label: FUN_000ba730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern ulonglong FUN_002ebf10(void);

void FUN_000ba730(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x11) != '\0') {
    cVar1 = FUN_002ebf10();
    *(char *)(in_ECX + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(in_ECX + 0x11) = 0;
    }
  }
  return;
}
