# Two allocator caller declaration admissions

`002d1560` and `002d1960` each gain only the existing
`bf_002ea01d_allocator_guest32.h` include and an exact source-matched
`extern void FUN_002b3c60(void);` declaration. An adjacent comment explicitly
retains the unresolved implicit guest EAX input. No function definition,
argument, return expression, cast, signed local, guest address or control flow
is changed. Exact reversal recovers both pinned source preimages.

## Instruction evidence and limits

The private read-only stored-program export has contiguous caller ranges
`002d1560..002d15d9` (122 bytes) and `002d1960..002d19da` (123 bytes), each
ending in actual `POP ESI; RET 8`. Independent Capstone decoding covers all
37 instructions in each body, including both conditional branches and both
real calls. There are no analyzed flow, length or fallthrough overrides.
Neither completeness nor control flow is inferred from Ghidra's declared size.

The first calls at `002d1573` and `002d1973` decode to `002b3c60`. The callers
load its real EAX input from `[ESI+0xb0]`, falling back to `[ESI+0xf8]` when zero.
The callee really reads `[EAX+0x70]`; its current source nevertheless declares
`void FUN_002b3c60(void)`. This batch copies that source interface only. It does
not add a made-up register argument or recover that missing register contract.

Allocator calls at `002d1581` and `002d1981` follow exact `PUSH 0x30` operands
and decode to `002ea01d`. Their returned EAX DWORD is stored immediately to
`[ESI+0x6c]`. Caller cleanup is delayed until `002d159d` and `002d199d`, where
`ADD ESP,4` removes the one size word after intervening memory stores. The
complete bodies have no intervening stack-changing operations on that path.
The outer allocator wrapper forwards the caller's size word through
`00067cd0` to the dynamic guest import slot `003bc650`; its additional temporary
`PUSH 1` is not an import argument. The runtime import implementation remains
absent. No native allocator or host pointer translation is introduced.

The existing `int iVar1` assignment from the allocator's `uint32_t` result is
unchanged. Values above `INT_MAX` involve an implementation-defined unsigned
to signed conversion in C++17. Existing integer-to-pointer casts, guest object
mapping, uninitialized pseudo-registers, implicit EAX/ECX/ESI transfers,
callee register preservation, indirect targets, native linkage and full caller
behavior remain unresolved. A passing syntax audit is not 1:1 fidelity.

## Gates

The manifest pins both source preimages and reversals, all five selected body
hashes/ranges, all three existing callee source definitions, both relevant
headers, complete real call lists, and narrow public instruction windows.
The public gate checks:

- Complete repaired translation units at O0/O2, as syntax and object builds.
- Original source failures and each individually removed declaration failure.
- Canonical source routing and original body identity.
- 185 metadata leaf mutations and 146 narrow-window byte mutations.
- 100,077 initialized synthetic size/return-bit observations per optimization,
  plus eight deliberately wrong size/return fixtures across O0/O2.
- The single additive step in the existing canonical C++17 CI workflow.

The synthetic fixtures define only an authored scalar stub. They run the
unchanged allocator call expression using initialized native scalar storage.
They observe this compiler's preservation of high-bit return representations,
not a portable guest-VA conversion guarantee, guest-memory store, native heap
operation or original call ABI. No canonical caller or original machine-code
stream executes.

The optional private verifier reads bounded JSON and independently decodes all
five complete bodies. It rejects 70 record mutations covering identities,
ranges, byte counts, instruction coverage, hashes and analyzed overrides.
Stored body/hash agreement is not fresh authentication of the original XBE.
The pinned original XBE identity is unchanged. Private exports and complete
original bodies are not included in this batch.

Run the public gate with
`python3 tools/test_cpp_20261105_allocator_declarations.py`.
The optional private replay uses
`python3 tools/verify_cpp_20261105_allocator_declarations.py --functions PRIVATE_FUNCTIONS_JSONL`
and requires Capstone. This admission does not change any historical ledger.
