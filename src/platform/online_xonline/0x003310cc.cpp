/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 20622F01948F791A79FB5150355DBF13D06F14A7F9E059194627C50E18032F31
 * Entry: 0x003310cc, Ghidra index: 12390, label: FUN_003310cc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003310cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint32_t imported_address;
  uint32_t first_iv_word;
  int in_ECX;
  undefined1 local_1ac [384];
  /* EBP-0x28 through EBP-0x11: the two output addresses differ by FOUR
   * bytes (0x331123/0x331139). The later parity call at 0x331152 uses
   * the first address and length 0x18, so retain one 24-byte region.
   * No output size or behavior of the platform imports is inferred here. */
  uint8_t digest_bytes[24];
  int local_14;
  /* Adjacent DWORDs EBP-0x0c/-0x08; CBC receives EBP-0x0c at
   * 0x331169 and 0x3311f9. Preserve their shared eight-byte storage. */
  uint32_t iv_words[2];
  uint local_8;
  
  local_14 = in_ECX;
  /* 0x3310e9: PUSH 0x4b0508 is a guest DATA address, not a host LAB.
   * ABI_UNVERIFIED: these address casts are source inspection proxies;
   * guest mapping, kernel import interfaces and crypto behavior are open. */
  XcHMAC((const void *)(uintptr_t)UINT32_C(0x004b0508),0x10,param_1,0x10,0,0,param_2);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x538) != 0) {
    param_2 = (int *)(in_ECX + 0x53c);
    do {
      iVar1 = *param_2;
      /* 0x331113/0x33111b load the two original DWORDs each iteration. */
      iv_words[0] = *(uint32_t *)(uintptr_t)UINT32_C(0x004b02c8);
      iv_words[1] = *(uint32_t *)(uintptr_t)UINT32_C(0x004b02cc);
      XcHMAC((const void *)(uintptr_t)UINT32_C(0x004b04ac),0x10,iVar1 + 0x50,0x10,0,0,digest_bytes);
      XcHMAC((const void *)(uintptr_t)UINT32_C(0x004b0498),0x10,iVar1 + 0x50,0x10,0,0,digest_bytes + 4);
      XcDESKeyParity(digest_bytes,0x18);
      XcKeyTable(1,local_1ac,digest_bytes);
      XcBlockCryptCBC(1,0x10,param_1,param_1,local_1ac,1,iv_words);
      local_8 = local_8 + 1;
      param_2 = param_2 + 1;
    } while (local_8 < *(uint *)(local_14 + 0x538));
  }
  /* 0x33119d..0x3311b1: load the first IV word, then one DWORD import
   * slot, then the second IV word. ESI preserves that imported address
   * across the first HMAC (0x3311c2/0x3311d0); do not reload the slot. */
  first_iv_word = *(uint32_t *)(uintptr_t)UINT32_C(0x004b04fc);
  imported_address = *(uint32_t *)(uintptr_t)UINT32_C(0x00386464);
  iv_words[0] = first_iv_word;
  iv_words[1] = *(uint32_t *)(uintptr_t)UINT32_C(0x004b0500);
  XcHMAC((const void *)(uintptr_t)UINT32_C(0x004b04ac),0x10,
         (const void *)(uintptr_t)imported_address,0x10,0,0,digest_bytes);
  XcHMAC((const void *)(uintptr_t)UINT32_C(0x004b0498),0x10,
         (const void *)(uintptr_t)imported_address,0x10,0,0,digest_bytes + 4);
  XcDESKeyParity(digest_bytes,0x18);
  XcKeyTable(1,local_1ac,digest_bytes);
  XcBlockCryptCBC(1,0x10,param_1,param_1,local_1ac,1,iv_words);
  return;
}
