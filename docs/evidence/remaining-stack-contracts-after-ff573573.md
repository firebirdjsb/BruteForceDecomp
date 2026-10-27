# Deferred stack contracts after audit ff573573

These are investigation handoffs, **not source repairs or new syntax passes**.
The sources remain unchanged. The queue came from complete audit
`ff573573f01d494888be68e80bb89c7bf4165a45`; recheck current source hashes and
the latest report before assigning work. Whole-XBE hash checked before private
instruction inspection:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## 0x00150290: packet, partial flag byte and missing argument word

- Source: `src/main_unclassified/band_0015/0x00150290.c`.
- Original range `00150290..00150411`, 386 bytes; SHA-256
  `BDE44AEFAD0B0BE7776E80D8A6C20819D50FAA2625331D05F2086DBDABB4615B`.
- Diagnostic: `stack0xffffffd4` used as third argument to `0x23D240` twice.
- The prologue allocates 40 bytes. Before the calls, the body writes several
  raw DWORDs, computes a scalar through a virtual ST(0) result and performs a
  partial flag-byte update. The high flag bits originate in incoming stack
  storage; do not manufacture them with whole-frame zero initialization.
- `0x150390/0x1503C2` LEA `[ESP+0x0C]` after pushing the scalar word. Callee
  `0x23D240` stores a pointer at argument byte offset `+0x20` (`0x23D313`).
  A 36-byte object inferred solely from that final store misses the caller's
  other stack accesses; reconcile the complete 40-byte allocation first.
- The body returns with RET 12, while the current draft has two parameters.
  Original incoming words are used separately for the selected object,
  packet data and array index; they must not be conflated.
- ESI/EDI inputs, virtual cleanup/ST(0) result, preserved flag bits and the
  full `0x23D240`/`0x234190` packet contract remain unresolved.
- Next: senior caller/callee reconstruction with original stack coordinates;
  retain raw words and partial writes, then review packet lifetime/retention.

## 0x00116340: multiple callback outputs and implicit vector helpers

- Source: `src/main_unclassified/band_0011/0x00116340.c`.
- Original range `00116340..00116477`, 312 bytes; SHA-256
  `DD9C7AD9BE2653224CC7E9FAD7BF528A52BDFCCA6798951193B1D71EEFFB6A2D`.
- Diagnostic: unresolved `stack0xffffffa4`.
- Virtual `+0xAC` calls at `0x116391..0x11639B` and
  `0x1163BB..0x1163C7` receive two stack addresses; calls to `0x39510`
  and later `0x621C0` consume additional implicit state.
- Current four-byte/20-byte local declarations are not proof of output sizes.
  Callback writes, contiguous spans, helper inputs and x87 return/storage
  boundaries need recovery together. Do not replace the ghost with an
  arbitrary array or assume disconnected scalar locals receive the output.

## 0x002C2530: dynamic original stack allocation

- Source: `src/main_unclassified/band_002c/0x002c2530.c`.
- Original ordered ranges `002C2530..002C25B9` (138 bytes),
  `002C25C0..002C2616` (87 bytes); SHA-256
  `768031773DC47284A6EB2AFD03A23E9C6DD05455E305C06FB7D633D05F890A8C`.
- Diagnostic: unresolved `stack0xffffffdc` used as a byte map.
- Original instructions sign-extend a 16-bit length, round the allocation and
  call `0x2EBEA0`. ESP then supplies the zeroed scratch base: REP STOSD plus
  trailing-byte stores clear the requested length. Subsequent indices derive
  from 12-bit fields in guest records.
- Do not infer a fixed 4,096-byte local from those indices or blindly use a C
  VLA. Negative lengths, original allocation/probing, ESP changes, rounding
  and caller cleanup require evidence. An ordinary helper return does not
  implement this stack-changing protocol.
- Next: reconstruct the allocator's machine-frame contract and valid input
  ranges before choosing a C11 representation. Preserve the original guest
  failure behavior rather than adding guessed bounds or fallback values.
