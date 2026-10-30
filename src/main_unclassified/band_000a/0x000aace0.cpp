/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E91F4A303189574F9FB38CDAE8A6CBC90E62A932EE96A3715876CB7F62070F1F
 * Entry: 0x000aace0, Ghidra index: 2034, label: FUN_000aace0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern undefined1 FUN_000aad50(void);
extern void FUN_000aa600(void);

void FUN_000aace0(void)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x78) != in_EAX) {
    if (*(int *)(in_ECX + 0x78) != in_EAX) {
      FUN_0008f6a0();
    }
    if (*(int *)(in_ECX + 0x78) == 0) {
      cVar1 = FUN_000aad50();
      if (cVar1 == '\0') {
        *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) | 1;
        return;
      }
    }
    *(byte *)(in_ECX + 0x13) = *(byte *)(in_ECX + 0x13) & 0xfe;
    FUN_000aa600();
  }
  return;
}
