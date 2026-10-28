# 0x000dd380: deferred register and stack producers

Status: deferred; source remains byte-for-byte unchanged. No syntax repair,
runtime equivalence or byte match is claimed.

The original XBE SHA-256 was verified as
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Ordered function bodies independently match their export digests:

| Entry | Bytes | Body SHA-256 |
| --- | ---: | --- |
| `0x000dd380` | 1338 | `77C14F72A9290726F05DF72A27213EB28D8DC7E160FDF7EDAB3386D243798EF3` |
| `0x0001f9c0` | 93 | `D8A94974EA41E61A7BABFD366A2021AD41B95144A6E9828BD9F7A91EBF7A3DC8` |
| `0x0001fd40` | 59 | `BD8404AC490D6FD5998635B9C0EC962C3D0A4FC6930010655F35C27A81C10DA4` |
| `0x002333b0` | 254 | `43F0D4453372A1B4E5F54209D1CA198B28D4FDF32EBD4DE09D3B667501340A7E` |
| `0x002334b0` | 219 | `9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60` |
| `0x002ebfbc` | 2 | `4B20B53134E44637439EED85CABF561485A7ABC17738BFA0731618DC22847C8A` |

`tools/source_layout.py` resolved the source paths. Baseline unchanged sweep
flags fail on both i686 and x86_64 Windows targets: float-to-pointer casts
at source lines 72/98, followed by pointer-to-float at line 108. These are
symptoms of reused storage and missing producers, rather than proof that
retagging a few variables gives a working function.

## Observed blockers

- The entry `0xdd380/0xdd384` uses the first stack argument as a raw pointer
  and dereferences its `+0xbf0` word. The retained C signature calls this
  argument a float and later also uses it numerically. On the later branch,
  `0xdd71e` instead loads the second stack argument (`ESP+0x110` after
  EDI has been popped) for the scalar multiplication at `0xdd725`.
  This collision must be separated using actual stack lifetimes.
- `0xdd417..0xdd42f` copies exactly 36 bytes from the virtual-call return
  into original stack `ESP+0x7c`. The draft uses `afStack_90[2]` as the
  destination and then writes nine floats through it. Merely enlarging it
  would not connect the downstream register-based reads.
- Before `0xdd49e`, `0xdd48a/0xdd48e/0xdd492` sets ECX=`ESP+0x1c`,
  EDX=`ESP+0x7c`, EAX=`ESP+0x28`. Before `0xdd4d7`, the corresponding
  instructions at `0xdd4cb/0xdd4cf/0xdd4d3` use the same ECX/EDX regions
  and EAX=`ESP+0x3c`. Authenticated `0x1f9c0` writes exactly three
  dwords through EAX at `0x1fa14/0x1fa16/0x1fa0d`. Both C calls are
  currently `FUN_0001f9c0()` and transport none of those pointers. The
  subsequent caller loads at `0xdd4dc..0xdd538` therefore have no connected
  producer in the C draft. No new unpassed output array was introduced.
- `0xdd661` places `ESP+0x38` in EAX before the call at `0xdd671`.
  Authenticated `0x1fd40` reads and overwrites its EAX-addressed triple;
  stores are at `0x1fd6a/0x1fd71/0x1fd77`. The C call omits that input/
  output bridge, yet subsequent C expressions consume the affected words.
- `0xdd7f8/0xdd809` selects EDX outputs for two `0x2333b0` calls.
  The callee stores nine dwords through EDX, beginning at `0x233452` and
  ending at `0x2334a5`; the C calls omit these output pointers.
- `0xdd820..0xdd835` and `0xdd869..0xdd878` supply ECX/EDX input regions
  and an EAX output region to `0x2334b0`. Its original body writes nine
  dwords through EAX (`0x2334c4..0x233587`) and leaves EAX as that pointer.
  The caller then copies 36 bytes from that return pointer at
  `0xdd842..0xdd85a` and `0xdd885..0xdd89d`. The draft omits the register
  inputs/outputs and reduces the first 36-byte copy to a one-word pointer
  assignment rather than the actual destination-region write.
- The four scalar calls actually target `0x2ebfbc`, whose two bytes jump
  to `0x2ebfbe`. For example `0xdd444/0xdd448` loads two x87 inputs before
  the call at `0xdd44e`, and `0xdd453` consumes the resulting x87 state.
  Existing `thunk_FUN_002ebfbe()` expressions do not establish a scalar C
  prototype or an ST(0) transport. The broader frame/control dependency is
  already documented in [the x87 handoff](002ebfe0-fpu-frame-handoff.md).

The safe next scope is the actual guest register/stack bridges, virtual-call
contracts and x87 helper boundary, followed by reused scalar-slot separation.
No guessed ST(0) return, new helper prototype, zero-filled output or register
parameter was supplied. Source editing stopped before a speculative repair.

Only this evidence note was added. Source identity/hash retention was checked
by comparison with the captured baseline; no repair loop was needed. Other
accepted/pending sources, shared headers, metadata, verifiers and Git state
were untouched by this owner. ABI, x87 precision/control/exception behavior,
SSE/MXCSR effects and Xbox runtime remain unverified. No game, link, byte-match
or production test was performed; no assets or deployment were touched.
Rollback is removal of this note; there is no source/game change to undo.
