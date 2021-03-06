.. _sec-EventWaveform-src:

EventWaveform
^^^^^^^^^^^^^

**Extends:** :ref:`Interface <sec-Interface>`

**Description:** see :numref:`sec-EventWaveform`

**YAML Specification:**

.. code-block:: yaml
    :linenos:

    attributes:
    - doc: Value is 'Waveform of detected extracellularly recorded spike events'
      dtype: text
      name: help
      value: Waveform of detected extracellularly recorded spike events
    doc: Represents either the waveforms of detected events, as extracted from a raw data
      trace in /acquisition, or the event waveforms that were stored during experiment
      acquisition.
    groups:
    - doc: SpikeEventSeries object containing detected spike event waveforms
      neurodata_type_inc: SpikeEventSeries
      quantity: '*'
    name: EventWaveform
    neurodata_type_def: EventWaveform
    neurodata_type_inc: Interface


