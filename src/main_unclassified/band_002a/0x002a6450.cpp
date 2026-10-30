/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CD856200D4E1AA40079BBC85E2437C0D6E532B57C1A9E0E8977A987C61A2542E
 * Entry: 0x002a6450, Ghidra index: 9585, label: FUN_002a6450
 * STATUS: C11_STORAGE_REVIEW, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * Evidence: docs/evidence/002a6450-opaque-frame-arguments.md.
 */
#include "bf_ghidra_types.h"

/* Original vtable words/slots and arithmetic are DWORD-sized guest addresses.
 * Identity-mapped guest memory is required; this is not pointer translation. */
static uint32_t bf_002a6450_vtable(uint32_t receiver)
{
  uint32_t vtable;
  memcpy(&vtable, (const void *)(uintptr_t)receiver, 4);
  return vtable;
}

static code *bf_002a6450_slot(uint32_t vtable, uint32_t slot)
{
  uint32_t target;
  memcpy(&target, (const void *)(uintptr_t)(vtable + slot), 4);
  return (code *)(uintptr_t)target;
}

static code *bf_002a6450_target(uint32_t receiver, uint32_t slot)
{
  return bf_002a6450_slot(bf_002a6450_vtable(receiver), slot);
}

static void bf_002a6450_put(unsigned char *frame, size_t offset, uint32_t value)
{
  memcpy(frame + offset, &value, 4);
}

static uint32_t bf_002a6450_word(const unsigned char *frame, size_t offset)
{
  uint32_t value;
  memcpy(&value, frame + offset, 4);
  return value;
}

static uint16_t bf_002a6450_bound(const unsigned char *frame)
{
  uint16_t value;
  memcpy(&value, frame, 2);
  return value;
}

void FUN_002a6450(void)
{
  /* ABI_UNVERIFIED: original ESI/EDI are implicit entry inputs. Ordinary
   * C does not bind these uninitialized draft proxies to those registers. */
  uint32_t unaff_ESI;
  uint32_t unaff_EDI;
  /* Exactly SUB ESP,0x20 bytes. No inferred structure or callback field types.
   * Only original stores initialize bytes; callback-written bytes are unknown
   * until the callback contract is supplied. Do not zero-fill the frame. */
  unsigned char frame[32];
  /* ABI_UNVERIFIED: truncating a host local pointer is only a storage proxy
   * for a mapped 32-bit guest stack, including each original stack argument. */
  const uint32_t frame_address = (uint32_t)(uintptr_t)frame;
  code *target;
  uint32_t captured_vtable;
  uint32_t index = 0;

  target = bf_002a6450_target(unaff_ESI, 0x1cu);
  target(unaff_ESI, frame_address + 8u);
  target = bf_002a6450_target(unaff_ESI, 0x14u);
  const uint32_t returned_word = (uint32_t)target(unaff_ESI);
  /* 0x2A646A stores the raw EAX DWORD before the +0x40 callback. */
  bf_002a6450_put(frame, 0, returned_word);
  target = bf_002a6450_target(unaff_ESI, 0x40u);
  target(unaff_ESI, frame_address + 4u);

  /* 0x2A6474 reads the +0x40 callback output. At 0x2A6478 only the EDI
   * vtable BASE is captured before the frame+12 write (0x2A6484). The
   * indirect CALL reads that base's slot AFTER the write (0x2A6488). */
  const uint32_t copied_word = bf_002a6450_word(frame, 4);
  captured_vtable = bf_002a6450_vtable(unaff_EDI);
  bf_002a6450_put(frame, 12, copied_word);
  target = bf_002a6450_slot(captured_vtable, 0x14u);
  target(unaff_EDI, frame_address + 8u, 4u, 0u);
  target = bf_002a6450_target(unaff_EDI, 0x14u);
  target(unaff_EDI, frame_address + 12u, 2u, 0u);
  target = bf_002a6450_target(unaff_EDI, 0x14u);
  target(unaff_EDI, frame_address, 2u, 0u);

  /* 0x2A64AB compares the memory WORD at frame+0 against BX=0. The bound
   * is a callback-accessible word, not the low bits of a host pointer. */
  if (bf_002a6450_bound(frame) != 0) {
    do {
      /* Original MOVZX EBP,BX passes the low unsigned 16-bit index. */
      const uint32_t callback_index = index & UINT32_C(0xffff);
      captured_vtable = bf_002a6450_vtable(unaff_ESI);
      /* 0x2A64BF/C7/CF: exactly three DWORD zeros at frame+20/+24/+28.
       * frame+16 is separate callback output and is not initialized here.
       * 0x2A64B3 captured the vtable BASE; CALL at 0x2A64D7 reads slot+44
       * after these writes. The frame and guest table may alias. */
      bf_002a6450_put(frame, 20, 0);
      bf_002a6450_put(frame, 24, 0);
      bf_002a6450_put(frame, 28, 0);
      target = bf_002a6450_slot(captured_vtable, 0x2cu);
      target(unaff_ESI, callback_index, frame_address + 16u);
      target = bf_002a6450_target(unaff_ESI, 0x30u);
      target(unaff_ESI, callback_index, frame_address + 20u);
      target = bf_002a6450_target(unaff_EDI, 0x14u);
      target(unaff_EDI, frame_address + 16u, 4u, 0u);
      target = bf_002a6450_target(unaff_EDI, 0x14u);
      target(unaff_EDI, frame_address + 20u, 12u, 0u);
      index += 1u; /* Original INC EBX wraps at 32 bits; CMP uses only BX. */
    } while ((uint16_t)index < bf_002a6450_bound(frame));
  }
  /* All callback prototypes, guest stack cleanup and register preservation
   * remain ABI_UNVERIFIED; the non-prototype code type supplies no bridge. */
}
