/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 641BFB12FF60C30AE5362AFD971F935F857D5D42933BE9EB0C02D2BED29F1DB4
 * Entry: 0x002eb5a6, Ghidra index: 10625, label: FUN_002eb5a6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Guest x86 0x002EB5A6: CRT seek helper. Offsets verified against XBE:
 * flags +0x0c, handle +0x10, default buffer size +0x18. */
int FUN_002eb5a6(bf_xbox_crt_stream32 *stream, int offset, int origin)
{
  uint32_t flags = stream->flags_0c;
  if ((flags & UINT32_C(0x83)) == 0 ||
      (origin != 0 && origin != 1 && origin != 2)) {
    _DAT_0040f4d8 = 0x16;
    return -1;
  }
  stream->flags_0c = flags & ~UINT32_C(0x10);
  if (origin == 1) {
    offset = (int32_t)((uint32_t)offset + (uint32_t)_ftell(stream));
    origin = 0;
  }
  __flush(stream);
  flags = stream->flags_0c;
  if ((int8_t)flags < 0) {
    stream->flags_0c = flags & ~UINT32_C(3);
  } else if ((flags & UINT32_C(0x409)) == UINT32_C(9)) {
    stream->unknown_18 = UINT32_C(0x200);
  }
  return FUN_002ef651(stream->handle_10, offset, origin) == -1 ? -1 : 0;
}
